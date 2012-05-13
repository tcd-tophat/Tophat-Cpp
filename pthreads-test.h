//Header Guard

#ifndef TOPHAT_THREAD_H
#define TOPHAT_THREAD_H
#include <pthread.h>
typedef void *(*voidFuncAvoidPtr)(void *);

class Tophat_thread {

	
	public:
		Tophat_thread(voidFuncAvoidPtr thread_func);

		~Tophat_thread();

		void Stop(void);
		
		void Start(void);
	private:

		pthread_t tid;
		voidFuncAvoidPtr thread_func_ptr;



};


#endif


