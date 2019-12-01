#include <iostream>
#include <signal.h>
#include <unistd.h> //做测试暂停程序

void sighandler(int sig){
	std::cout<<"received signal:"
		<<sig
		<<std::endl;
}

int main(int argc,char* argv[]){
	struct sigaction act, oact;
	act.sa_handler = sighandler;
	sigfillset(&act.sa_mask);
	act.sa_flags = 0;
	sigaction(SIGINT,&act,&oact);
	pause();
	return 0;
}
