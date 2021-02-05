typedef struct CPU_OCCUPY
{
    char            name[20];
    unsigned int    user;
    unsigned int    nice;
    unsigned int    system;
    unsigned int    idle;
    unsigned int    lowait;
    unsigned int    irq;
    unsigned int    softirq;
}CPU_OCCUPY;
double cal_cpuoccupy (CPU_OCCUPY *o, CPU_OCCUPY *n);
void get_cpuoccupy (CPU_OCCUPY *cpust);

double cal_cpuoccupy (CPU_OCCUPY *o, CPU_OCCUPY *n) 
{   
    unsigned long od, nd;    
    unsigned long id, sd;
    double cpu_use = 0;   

    od = (unsigned long) (o->user + o->nice + o->system +o->idle + o->lowait + o->irq + o->softirq);
    nd = (unsigned long) (n->user + n->nice + n->system +n->idle + n->lowait + n->irq + n->softirq);
 
    double sum = nd - od;
    double idle = n->user + n->system + n->nice - o->user - o->system- o->nice;
    cpu_use = idle/sum;
    
    return cpu_use;
}
 
void get_cpuoccupy (CPU_OCCUPY *cpust)
{   
    FILE *fd;         
    int n;            
    char buff[256]; 
    CPU_OCCUPY *cpu_occupy;
    cpu_occupy=cpust;

    fd = fopen("/proc/stat", "r"); 
    fgets (buff, sizeof(buff), fd);
    sscanf (buff, "%s %u %u %u %u %u %u %u", cpu_occupy->name, &cpu_occupy->user, 
                        &cpu_occupy->nice, &cpu_occupy->system, &cpu_occupy->idle,
                        &cpu_occupy->lowait, &cpu_occupy->irq, &cpu_occupy->softirq);
    /*
    printf("%s %u %u %u %u %u %u %u\r\n", cpu_occupy->name, cpu_occupy->user, 
                        cpu_occupy->nice,cpu_occupy->system, cpu_occupy->idle,
                        cpu_occupy->lowait, cpu_occupy->irq, cpu_occupy->softirq);
    printf("%s %u\r\n", cpu_occupy->name, cpu_occupy->user);
    */
    fclose(fd);

    return ;
}

/* Test */
int main()
{
    CPU_OCCUPY t1 = {0};
    CPU_OCCUPY t2 = {0};
    double usage = 0.0;
    
    get_cpuoccupy(&t1);
    sleep(10);
    get_cpuoccupy(&t2);

    usage = cal_cpuoccupy(&t1, &t2) * 100;  // %
    
    /* Test Print */
    printf("10s CPU Usage is %.2f\n");
    
    return 0;
}
