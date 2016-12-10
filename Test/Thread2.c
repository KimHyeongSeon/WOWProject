#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void*thread_function(void*arg)
int main(int argc, char **argv)
{
   int state;
   pthread_t t_id; //생성된 thread의 id
   state = pthread_create(&t_id,NULL,t hread_function,NULL);
   
   //쓰레드생성
   if(state != 0)
   {
      puts("Thread creation errer\n");
      exit(1);
   }
   sleep(3);
   puts("main function is end");
   return 0
}

void*thread_function(void*arg)//
{
  int i;
  for(i=0; i<3; i++)
  {
    sleep(2);
    puts("Thread is running");
  }
}
