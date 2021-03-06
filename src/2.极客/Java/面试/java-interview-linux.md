---
layout: post
title: Java面试题-Linux
slug: java-interview-linux
date: 2020-01-20 12:00
status: publish
author: 177
categories: 
  - 极客
tags:
  - Java
  - 面试题
  - IT
  - Linux
excerpt: Java面试题-Linux-收集整理
---

[notice]从网络上收集整理的Java面试题，如有侵权，请联系删除！[/notice]

## 1.查看内核

uname -a

## 2.查看系统调用列表

man 2 syscalls

## 3.查看系统调用说明

man 2 acct

#man 2 系统调用 3 是公共库函数

## 4.常用指令：

ls less more cat vi vim……（ps：vim比vi高级，可以多级撤销，语法高亮，跨平台，而且完全兼容vi）

## 5.远程访问

scp 文件移动到远程服务器

wget 下载服务器文件到本地

ssh 远程登陆

## 6.创建文件命令

touch 文件名

vi 文件名（文件名不存在的话）

mkdir 文件夹名

## 7. 在Linux中，怎样实现日志文件的自动循环？

‘logrotate’提供日志自动循环功能（注：将旧的日志切断，保存为.1，.2之类的文件名，并在下次切断时，逐个覆盖，并丢弃最老的）。

## 8. 怎样知道Linux中是谁在调度工作？

使用’at’命令加上’-l’选项，就可以查出。

## 9. 如何在不解压tar包的前提下，查看包里的内容？

使用’tar -tvf’。选项‘t’(显示内容)，‘v’（详细报告tar处理的文件信息），‘f’（使用档案文件或者设备）

## 10.查看文件内容有哪些命令可以使用？

vi 文件名 #编辑方式查看，可修改

cat 文件名 #显示全部文件内容

more 文件名 #分页显示文件内容

less 文件名 #与 more 相似，更好的是可以往前翻页

tail 文件名 #仅查看尾部，还可以指定行数

head 文件名 #仅查看头部,还可以指定行数

## 11.通过什么命令查找执行命令?

which 只能查可执行文件

whereis 只能查二进制文件、说明文档，源文件等

## 12. 在你的Linux机器上跟踪系统事件的守护进程名是什么？

‘syslogd’，它负责跟踪系统信息，并将跟踪日志存储在特定的日志文件里。

## 13. 在“/”根分区运行’fsck’命令的最低要求是什么？

“/”根分区必须挂载为只读模式才能运行fsck，读写模式则不行。

## 14. 如何按层次结构复制/home目录到另一个目录？

Linux的’cpio’命令可以实现效果。’cpio’可以按层次结构地复制文件和目录层次结构到另一个位置。（LCTT译注：实际上使用cpio的很少，而是使用cp -r较多）

## 15.怎么对命令进行取别名？

alias la='ls -a'

## 16.Ls 命令执行什么功能？可以带哪些参数，有什么区别？

ls 执行的功能：列出指定目录中的目录，以及文件

哪些参数以及区别：a 所有文件l 详细信息，包括大小字节数，可读可写可执行的权限等

## 17.建立软链接(快捷方式)，以及硬链接的命令。

软链接：ln -s slink source

硬链接：ln link source

## 18.目录创建用什么命令？创建文件用什么命令？复制文件用什么命令？

创建目录：mkdir

创建文件：典型的如 touch，vi 也可以创建文件，其实只要向一个不存在的文件输出，都会创建文件

复制文件：cp

## 19.怎么使一个命令在后台运行?

一般都是使用 & 在命令结尾来让程序自动运行。(命令后可以不追加空格)

## 20. 文件权限修改用什么命令？格式是怎么样的？

文件权限修改：chmod

格式如下：

chmodu+xfile给file的属主增加执行权限chmodu+xfile给file的属主增加执行权限 chmod 751 file 给 file 的属主分配读、写、执行(7)的权限，给 file 的所在组分配读、执行(5)的权限，给其他用户分配执行(1)的权限

chmodu=rwx,g=rx,o=xfile上例的另一种形式chmodu=rwx,g=rx,o=xfile上例的另一种形式 chmod =r file 为所有用户分配读权限

chmod444file同上例chmod444file同上例 chmod a-wx,a+r file同上例

$ chmod -R u+r directory 递归地给 directory 目录下所有文件和子目录的属主分配读的权限

## 21.随意写文件命令？怎么向屏幕输出带空格的字符串，比如”hello world”?

写文件命令：vi

向屏幕输出带空格的字符串:echo hello world

## 22.终端是哪个文件夹下的哪个文件？黑洞文件是哪个文件夹下的哪个命令？

终端 /dev/tty

黑洞文件 /dev/null

## 23.移动文件用哪个命令？改名用哪个命令？复制文件用哪个命令？如果需要连同文件夹一块复制呢？如果需要有提示功能呢？

mv mv

cp cp -r 

## 24.删除文件用哪个命令？如果需要连目录及目录下文件一块删除呢？删除空文件夹用什么命令？

rm rm -r rmdir

## 25.Linux 下命令有哪几种可使用的通配符？分别代表什么含义?

“？”可替代单个字符。

“*”可替代任意多个字符。

方括号“[charset]”可替代 charset 集中的任何单个字符，如[a-z]，[abABC]

## 26.用什么命令对一个文件的内容进行统计？(行号、单词数、字节数)

wc 命令 – c 统计字节数 – l 统计行数 – w 统计字数。

## 27.Grep 命令有什么用？如何忽略大小写？如何查找不含该串的行?

是一种强大的文本搜索工具，它能使用正则表达式搜索文本，并把匹 配的行打印出来。

grep [stringSTRING] filename grep [^string] filename

## 28.怎么使一个命令在后台运行?

一般都是使用 & 在命令结尾来让程序自动运行。(命令后可以不追加空格)

## 29.利用 ps 怎么显示所有的进程? 怎么利用 ps 查看指定进程的信息？

ps -ef (system v 输出) 

ps -aux bsd 格式输出

ps -ef | grep pid

## 30.哪个命令专门用来查看后台任务?

job -l

## 31.把后台任务调到前台执行使用什么命令?把停下的后台任务在后台执行起来用什么命令?

把后台任务调到前台执行 fg

把停下的后台任务在后台执行起来 bg

## 32.终止进程用什么命令? 带什么参数?

kill [-s <信息名称或编号>][程序] 或 kill [-l <信息编号>] 

kill-9 pid

## 33.怎么清屏？怎么退出当前命令？怎么执行睡眠？怎么查看当前用户 id？查看指定帮助用什么命令？

清屏：clear

退出当前命令：ctrl+c 彻底退出

执行睡眠 ：ctrl+z 挂起当前进程fg 恢复后台

查看当前用户 id：”id“：查看显示目前登陆账户的 uid 和 gid 及所属分组及用户名

查看指定帮助：如 man adduser 这个很全 而且有例子；adduser –help 这个告诉你一些常用参数；info adduesr；

## 34.搜索文件用什么命令? 格式是怎么样的?

find <指定目录> <指定条件> <指定动作>

whereis 加参数与文件名

locate 只加文件名

find 直接搜索磁盘，较慢。

find / -name "string*"

## 35.查看当前谁在使用该主机用什么命令? 查找自己所在的终端信息用什么命令?

查找自己所在的终端信息：who am i

查看当前谁在使用该主机：who

## 36.使用什么命令查看用过的命令列表?

history

## 37.怎样一页一页地查看一个大文件的内容呢？

通过管道将命令”cat file_name.txt” 和 ’more’ 连接在一起可以实现这个需要.

[root@localhost ~]# cat file_name.txt | more

## 38.数据字典属于哪一个用户的？

数据字典是属于’SYS’用户的，用户‘SYS’ 和 ’SYSEM’是由系统默认自动创建的

## 39. 如何在/usr目录下找出大小超过10MB的文件？

# find /usr -size +10M

## 40. 如何在/var目录下找出90天之内未被访问过的文件？

# find /var /! -atime -90

## 41.如何查看Linux的默认网关？

答: 用 “route -n” 和 “netstat -nr” 命令，我们可以查看默认网关。除了默认的网关信息，这两个命令还可以显示当前的路由表。

## 42.使用top查看系统资源占用情况时，哪一列表示内存占用呢？

PID USER      PR  NI  VIRT  RES  SHR S %CPU %MEM    TIME+  COMMAND

301 root      20   0     0    0    0 S  0.3  0.0   0:00.08 jbd2/sda3-8

1 root      20   0  2900 1428 1216 S  0.0  0.1   0:01.28 init

2 root      20   0     0    0    0 S  0.0  0.0   0:00.00 kthreadd

3 root      RT   0     0    0    0 S  0.0  0.0   0:00.00 migration/0

VIRT虚拟内存用量

RES物理内存用量

SHR共享内存用量

%MEM内存用量

