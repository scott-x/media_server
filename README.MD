# media server
A server written with cplusplus.

### api
- socket
- socketopt
- bind
- listen
- accept
- recv
- send
- close


### 查看接口

```
shift+n+k
```

参考： https://www.cnblogs.com/kelamoyujuzhen/p/10499824.html

### vim
```
# 撤回
u 
# 第一行
gg
# 最后一行
G
#一页一页翻
f 
# 当前行首
0
# 当前行尾
$
# 切换到第n行
:n
# 相对于当前行第几行行尾
n$
# 复制
yy
# 复制n行
yyn
#代表的意思是复制153行到167行的内容到172行
:153,167 co 172
#代表的意思是复制第8行的内容到12行后面
:8 co 12
# 粘贴
pp
# 删除一个字符
x
# 删除一行
dd
# 删除n行
ndd
dd:删除游标所在的一整行(常用)
ndd:n为数字。删除光标所在的向下n行，例如20dd则是删除光标所在的向下20行
d1G:删除光标所在到第一行的所有数据
dG:删除光标所在到最后一行的所有数据
d$:删除光标所在处，到该行的最后一个字符
d0:那个是数字0,删除光标所在到该行的最前面的一个字符
x,X:x向后删除一个字符(相当于[del]按键),X向前删除一个字符(相当于[backspace]即退格键)
nx:n为数字，连续向后删除n个字符
# 搜索
:/keyword 
# vim中用man搜索 api, 如accept
:!man 2 api
# 定位api
光标移到apiname上，shift+n+k
# 上一个
N
下一个
n
# 退出不做任何修改
q
# 保存退出
wq!
```

终端查询api
```
# 并不是所有的api都有文档，搜索不到的还需自己安装
man 2 api
```
