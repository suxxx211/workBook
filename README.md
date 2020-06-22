# Hello Github ~~

<div id="img_test_1" align="center">
    <img src="https://wx3.sinaimg.cn/mw1024/005KLw4Vly1g46ygmohz3j30h70gt0w4.jpg" hight="300px" width="300px" alt="壮壮女神"></img>
    <br />
</div>


### Previous record

+ Key issues record

    - 偶然发现md文件可以是一个更好更详细的的索引，所以应该吧md文件的编程学习提上日程。由于2019/6/18 study plan已经完成，所以将该计划提到2019/6/19 study plan中。 2019/6/17 23.35 by suxxx

    - html学习过程中的$、@、:等符号的功能和用途，主要也涉及到vue.js和jQuery，在后面的实践中学习，但是不能忘记。如果有进展，记得记录在SUMMARY和这个md文件中。 2019/6/19 23.49 by suxxx

    - :dart: 做一个类似留言板功能的web，提上日程，晚上的时候琢磨一下。一个文本框，一个用于显示的区域。两个元素，还想引入vue.js，慢慢来吧，第一个版本先不用。 2019/6/20 23.54 by suxxx
        * :dart: 发现一个KindEditor是js编辑器，应该能用到。
        * :dart: iframe也可以用一下,对于iframe显示不完全出现滚动条的问题，可以参考L3处理方式。现在有个问题就是没有服务器，不能使用后台处理功能。
        * 应该引入用户注册和登录功能
    
    - :heart: 做一个丽丽的课表显示web，可以导入全校课表数据，解析显示出丽丽的排课，需要一个导入按钮，一个显示列表。还需要考虑导入的数据。剩下的就是web文件传输的实现了。 2019/6/20 23.54 by suxxx
    
    - :orange_book: 修改readme.md文件，创建work record的列表和超链接，做一个简单的列表导航栏。 2019/6/20 23.54 by suxxx
    
    - ~~考虑要不要把record也使用markdown来写，看起来个人能够好看一些。可以  (md文件的raw显示不太好看暂时弃用)~~
    
    - 这些弄完后，还考虑vue.js和复习c++相关知识。在晚上留言板之后吧，课表优先级较低。要不在留言板中引入vue.js吧，这样两个都学习了，好就这样。
    
    - ~~c语言字符串数组、二维数组、函数指针相关硬核知识点巩固。(记下来了)~~
    
    - perl和makefile脚本的学习提上日程。

    - :fire:根据项目学习makefil.am相关自动化工具。
    
    - 继续搞搞python的串口工具。

+ Note
    - 2019-12-13 函数一定要有声明，写在对应c的h文件中。踩过两次坑了，第一次计算cpu使用率，double总是返回不出来。第二次计算lm75温度，正负数转换老是有问题。
    - 2019-12-18 全局变量一定要加锁，未加锁的全局变量可能在cpu调度过程中，导致多个线程对获取到的变量值不一样而出错。遇到的问题：告警灯启动后一直亮，在加锁的过程中首次使用到线程互斥所mutex的静态初始化PTHREAD_MUTEX_INITIALIZER宏，因为，这个锁有两个线程用到，并不能确定哪个线程首先会用到，因此不能使用init初始化接口。静态也挺好用。
    - 2020-01-06 getpeername()函数可以通过socket获取addr信息。
    - 2020-03-09 init.d中的启动脚本可以使用使用start-stop-daemon控制进程的start、stop、restart|reload

## 他强由他强 清风拂山冈

### Log Table
+ [6-14 Fist Time 新的开始](https://raw.githubusercontent.com/suxxx211/helloworld/master/work.record)
+ [6-15 Html <audio> 元素 和 js 创建元素](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-06-15_17.56_Saturday)
+ [6-16 Null](aa)
+ [6-17 Nice Day](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-06-17_22.29_Monday)
+ [6-18 js <checkbox>选中状态获取 jquery根据id获取元素对象 html .for属性 css # .](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-06-18_22.51_Tuesday)
+ [6-19 干货 html <radio>.name属性 \<select\>.id属性 vue.js v-* :(绑定) v-on $event jquery 获取元素属性值](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-06-19_23.09_Wednesday)
+ [6-20 markdown 列表 :beginner: js int->u_int int<->bool html .disablle/value属性](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-06-20_23.02_Thursday)
+ [6-21 strtok and strtor_r(可重入)](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-06-21_23.54_Friday)
+ [6-22 思考一下地址十六进制的转换](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-06-22_23.58_Saturday)
+ [6-23 文件的下载和上传 css \<fieldset\>和\<legend\>相关 html \<a\>.download属性和\<input type="file"\>元素以及相关事件 js \<Blob\>\<FileReader\>\<URL\>相关 谨记addEventListener()  Nice day](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-06-23_22.08_Sunday)
+ [6-24 Linux \<grep\>命令 \<mmap\>映射区同步方法 js string.trim()方法去空格和行终止符 typeof(var)获取变量类型 jQuery $.inArray() c 字符串数组传参](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-06-24_23.00_Monday)
+ [6-25 很屌的C指针数组、字符串数组传参、函数指针、函数指针数组 理解不了没关系 先记住怎么用](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-06-25_23.24_Tuesday)
+ [6-26 html \<iframe\>页面处理 C snprintf相关api的strlen段错误](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-06-26_21.50_Wednesday)
+ [6-27 html .slot 和 vue 的组件混合使用](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-06-27_22.54_Thursday)
+ [6-28 vue.js 组件的$(emit)](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-06-28_22.19_Friday)
+ [6-29 smb访问软连接文件 linux 创建软连接 gcc 使用静态库](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-06-29_21.16_Saturday)
+ [7-1 新的七月 新的一周 新的一天 packet 收包以及锁 luaCLI执行exec调用vtysh](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-01_23.34_Monday)
+ [7-2 RECORD](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-02_22.53_Tuesday)
+ [7-3 linux 线程获取tpid 线程同步之条件变量cond](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-03_22.12_Wednesday)
+ [7-5 端口模式 access|trunk|hybrid](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-05_23.33_Friday)
+ [7-8 linux cp -a 和 dup相关api](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-08_23.33_Monday)
+ [7-9 linux remove fprintf相关api L3web Q1-3疑问解答](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-09_22.20_Tuesday)
+ [7-10 linux 进程退出方式[exit]等 和 [atexit] c程序空间各段 L3线程锁的警告：永远不要重复释放一个未锁定的锁](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-10_23.54_Wednesday)
+ [7-11 linux 头文件的尖括号和引号的区别 js中页面跳转的几种方式](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-11_22.43_Thursday)
+ [7-17 Linux fork与vfork知识点 标准io与文件io缓冲](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-17_22.48_Tuesday)
+ [7-18 Linux 再写exit了解进程的终止状态与退出状态(码) 需要补充setbuf设置io缓冲区 marvell聚合配置调试的思考](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-18_22.42_Thursday)
+ [7-19 Marvell trunk单端口转发devNum计算、多端口转发调试记录 万兆光口模式配置 V2R7 部分协议报文(igmp/arp)上cpu分析](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-19_23.35_Friday)
+ [7-22 Linux signal处理(exec、子进程相关等)](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-22_23.24_Monday)
+ [7-23 最基础的直连三层转发不通的一点点思考 明天记得继续分析验证 再记录](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-23_22.58_Tuesday)
+ [7-25 L3设备三层转发不通的分析(分析代码，配置不对，代码分析都在脑子里，没有总结写出来) Linux文件和记录锁的共享 OSPF邻居状态机的分析(硬核知识)](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-25_22.32_Thursday)
+ [7-26 Linux io多路复用小结](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-26_09.18_Friday)
+ [7-29 交换机和小盒子级联验证三层转发功能 问题分析与思路建议](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-29_23.01_Monday)
+ [7-30 OSPF的LSA7种type 邻居与邻接关系 stub区的概述](https://raw.githubusercontent.com/suxxx211/helloworld/master/work_record/2019-07-30_22.21_Tuesday)
