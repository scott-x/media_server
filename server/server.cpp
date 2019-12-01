/*
 * Server class
 * @author: Scott Xiong
 * @date 2019-12-01
 * @copyleft GPL 2.0
 */
#include <iostream>
#include <unistd.h> //usleep

#include "server.h"

namespace micky{
Server::Server(){
	std::cout<<"constructor..."<<std::endl;
}
Server::~Server(){
	std::cout<<"destructor..."<<std::endl;
}
void Server::run(){
	while(1){
		std::cout<<"running..."<<std::endl;
		::usleep(1000*1000); //sleep 1 second μs为单位要访问c语言的系统函数前面需加::
	}
}
}


