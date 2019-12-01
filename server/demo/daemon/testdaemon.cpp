#include <iostream>

#include <unistd.h> //fork的头文件在里面
#include <stdlib.h> //设置session id
#include <fcntl.h>

void daemonize(){
	//fork
	pid_t pid;
	if((pid=fork())<0){
		std::cout<<"can't create subprocess!"<<std::endl;;
	}else{
		if (pid!=0){
			exit(0);//退出主进程，子进程将成为孤儿进程被init接管
			//init是系统进程第一个子进程，没人要的孩子都被他收养
		}
	}

	setsid();

	if(chdir("/")<0){
		std::cout<<"can't change dir!"<<std::endl;
		exit(-1);
	}
    int fd;
	fd = open("/dev/null",O_RDWR);
	dup2(fd,STDIN_FILENO);  
	dup2(fd,STDOUT_FILENO);  
	dup2(fd,STDERR_FILENO);
	return;
}

int main(int argc, char* argv[]){
	daemonize();
	while(1){
		sleep(1);//sleep one second
	}
}
