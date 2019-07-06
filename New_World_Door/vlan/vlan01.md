### 接口的类型  

+ Access
+ Trunk
+ Hybrid

#### 接口的类型例图  

![接口的类型例图](https://forum.huawei.com/enterprise/zh/data/attachment/forum/dm/ecommunity/uploads/2014/0605/17/539033ee39105.png)

Access接口：交换机上用来连接用户主机的接口，它只能连接接入链路（Access Link）。  

Trunk接口：交换机上用来和其他交换机连接的接口，它只能连接干道链路（Trunk Link）。  

除此之外，还有一种接口叫Hybrid接口，是交换机上既可以连接用户主机，又可以连接其他交换机的接口。Hybrid接口既可以连接接入链路又可以连接干道链路。  

*注：Hybrid接口和Trunk接口在接收数据时，处理方法是一样的。唯一不同之处在于：发送数据时，Hybrid接口可以允许多个VLAN的报文发送时不打标签，而Trunk接口只允许缺省VLAN的报文发送时不打标签。*  

#### 报文处理方式

+ Access接口  
![Access接口报文收发处理流程图](https://forum.huawei.com/enterprise/zh/data/attachment/forum/dm/ecommunity/uploads/2014/0623/18/53a80752c886a.png)  

+ Trunk接口  
![Trunk接口报文收发处理流程图](https://forum.huawei.com/enterprise/zh/data/attachment/forum/dm/ecommunity/uploads/2014/0623/18/53a807dd56be6.png)  

+ Hybrid接口  
![Hybrid接口报文收发处理流程图](https://forum.huawei.com/enterprise/zh/data/attachment/forum/dm/ecommunity/uploads/2014/0623/19/53a80929ce751.png)  




