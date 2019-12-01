/*
 * Server class
 * @author: Scott Xiong
 * @date 2019-12-01
 * @copyleft GPL 2.0
 */
#ifndef __SERVER_H__
#define __SERVER_H__

namespace micky{ //命名空间下的东西顶格写
class Server {
	public:
		Server();
		~Server();
	public:
		void run();
};
} //namespace micky

#endif //__ERVER_H__ 定义宏的目的是防止头文件多次被引入，一旦宏被定义，里面的逻辑就不会再执行，也就是不会被再次引入
