#include<stdio.h>
#include<conio.h>
//선택정렬  
int main(void) 
{
//freopen("input.txt", "r", stdin); 
//freopen("p
int number, input[10000], temp, i, j, min, s;   
scanf("%d", &number); 
for (i = 1; i <= number; i++)
{
scanf("%d", &input[i]);   
}
for (i = 1; i < number; i++)
{
min = input[i];    
s = i; 
for (j = i + 1; j <= number; j++)
{
if (min > input[j])
{ 
min = input[j];  
s = j;   
}
}
temp = input[i];
input[i] = input[s]; 
input[s] = temp;  
}
for (i = 1; i <= number; i++)
{
printf("%d ", input[i]);   
}
getch(); 
} 
