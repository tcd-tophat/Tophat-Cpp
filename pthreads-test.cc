#include "pthreads-test.h"


Tophat_thread::Tophat_thread(voidFuncAvoidPtr t_main){
	
	thread_func_ptr = t_main;
	return;
}
void * func(void*){
	        return (void *)NULL;

}



int main(){

	voidFuncAvoidPtr a= &(func); 
	Tophat_thread * test = new Tophat_thread(a);

	return 0;
}

//pthread_create(&t1, NULL, &print_message, NULL);

