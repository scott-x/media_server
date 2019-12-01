# 2 ways to install signal
### 1.简单方式
```c++
signal(int sig,void(*func)(int))
```
### 2.高级方式
```c++
int sigaction(int sig,
			const struct sigaction* act,
			struct sigaction* oact); //oact: old action
```

安装好信号后，程序就可以监听这些信号
