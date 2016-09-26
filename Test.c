Enter file contents here
#include<stdio.h> 
 
 
int main() 
{ 

int array[10] = {5,1,9,8,4,6,7,0,2,3};
int i, swapped; 

while (swapped > 0) 
{ 
swapped = 0; 

for (i = 0; i < 9; i++)
{

   if (array[i] > array[i + 1]) 
   { 
   int temp = array[i]; 
   array[i] = array[i + 1]; 
   array[i + 1] = temp; 
   swapped = 1;
   } 
 } 
    for (i = 0; i < 10; i++) 
    { 
     printf("%d  ", array[i]); 
    } 
    
    printf("\n\n");    
    } 

 
  return 0; 
} 
