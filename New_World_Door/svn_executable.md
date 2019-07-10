### 问题描述

移植NTP时遇到一个问题, 源码上传至SVN版本库, 再次下载至本地, 编译报错, 提示配置文件**无权限**

> zhangqing@kema-s2:~/svn/trunk/kml3nos$ ./build.sh ntp
> compile ntp
> ./build.sh: 行 204: **./configure: 权限不够**
> make: \*** 没有规则可以创建目标“clean”。 停止。
> make: \*** 没有指明目标并且找不到 makefile。 停止。
> make: \*** 没有规则可以创建目标“install”。 停止。
> cp: 无法获取"/home/zhangqing/svn/trunk/kml3nos/kmos/app/ntp-4.2.8p13/_install/bin/ntpd" 的文件状态(stat): 没有那个文件或目录
> zhangqing@kema-s2:~/svn/trunk/kml3nos$

命令行查看configure权限, 发现没有可执行权限

>zhangqing@kema-s2:~/svn/trunk/kml3nos/kmos/app/ntp-4.2.8p13$ ls -l configure
>-rw-rw-r-- 1 zhangqing zhangqing 944042  7月 10 17:54 configure

通过 `chmod` `+x` `configure` 增加可执行权限, 再次编译, 还是有错误

>checking for compile/link hardening flags... failed.
>configure: error: Problem with genHardFlags!
>make: *** 没有规则可以创建目标“clean”。 停止。
>make: *** 没有指明目标并且找不到 makefile。 停止。
>make: *** 没有规则可以创建目标“install”。 停止。
>cp: 无法获取"/home/zhangqing/svn/trunk/kml3nos/kmos/app/ntp-4.2.8p13/_install/bin/ntpd" 的文件状态(stat): 没有那个文件或目录



### 问题分析:

可能是 svn 提交代码至版本库时, 不会提交文件权限, 可执行脚本权限未被保留导致报错.



### 问题修改:

通过 `svn:executable` 配置文件(夹)权限, 再次提交即可.

**`svn` `propset` `svn:executable` `on` `待修改权限文件` / `待修改权限文件夹 -R`**



以通过svn命令配置ntp源码包权限为例:

svn propset svn:executable on ntp-4.2.8p13 -R



### 参考资料:

#### 1  SVN官网帮助文档(windows客户端配置)

https://tortoisesvn.net/docs/release/TortoiseSVN_en/tsvn-dug-propertypage.html

**svn:executable**

**Figure 4.52. svn:executable property page**

![svn:executable property page](https://tortoisesvn.net/docs/release/TortoiseSVN_en/images/PropEditExe.png)


This property controls whether a file will be given executable status when checked out on a Unix/Linux system. It has no effect on a Windows checkout.



#### 2  svn命令行配置  https://www.kancloud.cn/i281151/svn/197170

在UNIX系统，如果你希望一个文件设置执行权限：

```
$ svn propset svn:executable ON somescript
property 'svn:executable' set on 'somescript'
```

