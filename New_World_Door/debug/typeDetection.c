/* Compiler Detection */
/* char type is unsigned char or signed char ? */

int typeDetection();

int typeDetection()
{
    printf("char type is %ssigned !\n", (char)-1 > 0 ? "un" : "");
    
    return 0;
}
