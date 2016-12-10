#include<stdio.h> 
#include<stdlib.h>
#define SIZE 5  
int stack[SIZE]; 
int top = 0;    

void stack_push(); 
void stack_pop();
void stack_print();    

void main() 
{
int input;  
while (1)
{
printf("\n\n1.Push (max 5) \n2.pop\n");    
scanf("%d", &input);
switch (input)
{
case 1:stack_push(); 
break;   

case 2:stack_pop();
break;    
}

stack_print();   
}

}
void stack_push()
{
int n;  
if (top >= SIZE)
{
printf("스택 오버 플로우\n\n");   
}
else   { 
printf("\ninput : ");
scanf("%d", &n); 
stack[top++] = n;  
}
}
void stack_pop() 
{
if (top == 0) 
{
printf("Empty\n\n"); 
}
else 
{
top--;   
printf("pop : %d\n\n", stack[top]); 
}
}
void stack_print() 
{
int i;   
for (i = 0; i < top; i++) 
printf("%d ", stack[i]); 
}
