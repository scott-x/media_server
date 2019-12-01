#include <iostream>
#include "server.h"

int main(int argc, char* argv[]){
	micky::Server* server = new micky::Server();
	if (server){
		server->run(); //堆里方法访问用箭头
	}
}
