#include <stdio.h>

int main(int argc, char*argv[])
{    
  char ch1; 
  char ch2;  
  char *p; 
  
  ch1 ='a';  
  ch2 ='b';  
  
  printf("ch1 = %c\n", ch1);  
  printf("ch2 = %c\n", ch2);  
  
  p = &ch1; 
  printf("*p1 = %c\n", *p);  
  p = &ch2; 
  printf("*p2 = %c\n", *p);   
  
  return 0;
}
