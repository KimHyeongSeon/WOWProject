#include "stdafx.h"
#include "stdlib.h"
#include "string.g"

int main()
{
int *stack,size,num,i,length;
int count=0;
int *p;

int opr1,opr2,value;
char *ex="35*62/-";
char symbol;
length=strlen(ex);

stack=(int*)malloc(length*sizeof(int));
p=stack;
for(i=0;i<length;i++){
symbol=ex[i];

if(symbol!='+'&&symbol!='-'&&symbol!='*'&&symbol!='/')
{
value=symbol-'0';
*stack=value;
++p;
stack=p;
}
else{
--p;
stack=p;
opr2=*stack;

--p;
stack=p;
opr1=*stack;

switch(symbol){
case'+':num=opr1+opr2;
*stack=num;
if(i==length-1){
break;
}
p++;
stack=p;
break;

case'-':num=opr1-opr2;
*stack=num;
if(i==length-1){
break;
}
p++;
stack=p;
break;

case'*'=num=opr1*opr2;
*stack=num;
if(i==length-1){
break;
}
p++;
stack=p;
brack;

case'/':num=opr1/opr2;
*stack=num;
if(i==length-1){
break;
}
p++;
stack=p;
break;
}
}
}
printf("\n후위->%s\n",ex);

printf("\n결과->%d",*stack);
printf("\n");
system("pause");
retrun 0;
}

