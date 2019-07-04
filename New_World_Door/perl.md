### New World Door  #perl

+ 命令行: 使用参数-e  
    语法：perl -e LineProgram  
    `perl -e 'print "Hello World\n";'`  
+ hello_world.pl  
    顺序执行，行以分号结尾。  
	```
    #!/usr/bin/perl
	print "Hello World!\n";  <=等价于=> print("Hello World\n"); 
  ```
+ 注释：
    + 单行：#
    + 多行：=pod  Code Lines =cut
	
+ 引号的作用：
    + 单引号：原样输出，不解析各种转义字符和变量。
    + 双引号：解析转义字符和变量。
	
+ 基础数据结构：不同类型的变量可以使用相同的名称
	1. 普通变量：$
		`$num = 199;
		`$str = "kill u"
		访问：`$num $str
	2. 数组：@
		`@arr = (1,2,3);
		访问：`$arr[0]
			  `print @arr; 打印所有成员
			  `print $arr; 打印尺寸
			  `print $#arr; 打印最大索引值
	3. 哈希键值对：%
		`%h = ("a"=>1, "b"=>2);
		访问：`$h{"a"}
		
+ 字符串处理：
	1.连接：.
    ```
		$str1 = "u is ";
		$str2 = "dog ! ";
		$var = 666;
		$str = "say: " . $str1 . $str2 . $var;
     ```
		
+ 特殊字符：
	`__FILE__ 文件名`  
	`__LINE__ 行号`  
	`__PACKAGE__ 包名`  
