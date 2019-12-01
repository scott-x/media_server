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

```c++
struct sigaction{
	void(*sa_handler(int));//处理函数
	void(*sa_sigaction(int,siginfo_t*,void*));//处理函数
	sigset_tsa_mask;//掩码,就是屏蔽信号
	int sa_flags;//根据SA_SIGINFO 标记选择 ，设置为0 ，则用第一个action void(*sa_handler(int))，
	//设置为1，则用第二个action
	sa_handler/sa_sigaction
		void(*sa_restorer)(void);//设置为NULL，一般不用

};
```

我们只需设置第1，3，4个属性即可
