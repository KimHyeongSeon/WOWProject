#include <stdio.h>
int main(void)
{ 
  int array[3] = {10,20,30};    
  
  printf("%x %x %x \n", array,array+0, &array[0]); 
  printf("   %x %x\n", array+1,&array[1]);  
  printf("   %x %x\n", array+2,&array[2]);  
  printf("%d %d %d \n", sizeof(array),sizeof(array+0),sizeof(&array[0])); 
  
  return 0;
}
