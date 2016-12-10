#include<stdio.h>
#incldue<process.h>

unsigned_stdcall Thread(void*arg)
{
    while(1)
    {
       printf("HELLO\n");
       Sleep(1000);
    }
}

void main()
{
   _beginthreadex(NULL, 0, Thread, 0, 0,NULL);  //스레드 시작
   char c='0';
   
   while(1)
   {
       c = getc(stdin);
       if(c)
          break;//c에 값이 들어오면 종료
   }
}
