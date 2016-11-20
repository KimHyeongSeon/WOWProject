
#include <stdio.h>
#define MAX 6 

int main(void)
{

     int list[MAX] = { 11,12,15,16,18,19};    
     int target = 16; 
     int mid;
     int lowest = 0;
     int highest = (sizeof(list) / sizeof(int))- 1;  
     int result = -1; // Error check         
     // BINARY SEARCH Algorithm 

       while (lowest <= highest)

  {

  mid =lowest + ( (highest  - lowest )  /  2); 
  if (list[mid]== target)
     {
  result =mid;
  break;
    }

  else if(target < list[mid])
  highest =mid  - 1 ;

  else if( target > list[mid])
  lowest =mid + 1 ;
  }

      if (result!= -1)   

            {
  printf("index: list[%d]에서 %d \n", result , list[result]);
  return;
            }
        printf("못찾음"); 
        return 0;

}

