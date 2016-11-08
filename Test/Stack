#include "stdafx.h"
#include "stdlib.h"
#define MAX 20
char stack[MAX];
int top = -1;
char a[20];

void push(char x)
{
    if(top>=MAX-1)
        printf("Stack Overflow");
        else
        {
             top=top+1;
             stack[top]=x;
        }
}
void pop()
{
    if(top<0)
        printf("No Stack\n");
    else
    {
        printf("%c\n", stack[top]);
        top=top-1; //  top--와 같은값 참고.
    }
}
int main()
{
    scanf_s("%20s", a, 19);   //scanf_s는 보안을 위해서 사이즈도 변수 뒤에 적어 주어야 한다 a값을 넣는 변수 19사이즈
    for(int i=0;a[i];i++)
    {
        push(a[i]);
    }
    pop();
    
    system("pause");
    return 0;
}
