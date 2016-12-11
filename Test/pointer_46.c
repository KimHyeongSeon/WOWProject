#include <stdio.h>

void main()
{   
  int ary[3] = {10,100,1000};  
  int *pAry;  
  pAry = ary;  
  //pAry = &ary; //
  
  printf("ary : %d\n&ary : %d\npAry : %d\n",ary,&ary,pAry); 
  printf("Sizeof(ary) : %d\nSizeof(&ary) : %d\n", sizeof(ary),sizeof(&ary));  
  printf("*(ary+1) : %d\n*(&ary+1) : %d\n",*(ary+1),*(&ary+1));
  
  return 0;
}
