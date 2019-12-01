#include <iostream>
#include <signal.h>
#include <unistd.h>

void sighandle(int sig){
	std::cout<<"received signal:"
		<<sig
		<<std::endl;
}
int main(int argc, char* argv[]){
	signal(SIGINT, sighandle); //contral + c interrupt program 2
	//signal(SIGPIPE, sighandle);
	signal(SIGHUP, sighandle); // ./signal > a.txt 然后关闭，即可得到终端关闭信号a.txt  1
	signal(SIGQUIT, sighandle); //contrl + \ quit program 3
	pause();//暂停
	return 0;
}
