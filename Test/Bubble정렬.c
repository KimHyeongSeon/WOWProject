#include<stdio.h>  
#include<conio.h>
//버블정렬  
int main(void) 
{
//freopen("input.txt", "r", stdin); 
//freopen("p  

int number, input[10000], temp, i, j;   
scanf("%d", &number); 
for (i = 1; i <= number; i++) 
{   
scanf("%d", &input[i]); 
} 
for (i = 1; i < number; i++)
{  
for(j = i+1; j <= number; j++)
{    
if (input[i] > input[j])
{   
temp = input[i];   
input[i] = input[j];    
input[j] = temp;   
}  
} 
}   
for (i = 1; i <= number; i++)
{   
printf("%d ", input[i]); 
} 
getch();  
} 
