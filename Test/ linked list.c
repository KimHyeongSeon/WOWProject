#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct Node 
{   
int data; 
struct Node *next;
}node;
int count = 1;
node* head = NULL;
int insert(int n)
{  

node *p;
node *tmp; 
tmp = (node*)malloc(sizeof(node));   
tmp->data = n;  
tmp->next = NULL;   
p = head;  
if (head == NULL)
{     
head = tmp;    
return 1;   }   
while (p->next != NULL)   
p = p->next; 
p->next = tmp;
}
int del(int n)
{
node *pre = NULL;  
node *tmp = head;   
while (tmp != NULL && tmp->data != n) 
{
pre = tmp; 
tmp = tmp->next;
} 
if (tmp == NULL)  
{
printf("삭제 할 값이 없습니다.");    
return 0;   
}
if (head == tmp) 
head = tmp ->next;  
else if (tmp->next == NULL) 
pre->next = NULL;  
else 
{
pre->next = tmp->next;      
return 1;  
}
}
int find(int n)
{
node *tmp = head;  
while (tmp != NULL)
{  
if (tmp->data == n)      
{
return tmp->data;      
}   
count++;    
tmp = tmp->next;   
}
return 0;
}
void print()
{
node *tmp = head; 
while (tmp != NULL)  
{
printf("%d  ", tmp->data);  
tmp = tmp->next;
}
printf("\n");
}
int main()
{
int data, num, i, n = 0;
while (1) 
{  
printf("실행 할 번호를 입력하시오.\n");    
printf("1.앞에 삽입 2.삭제 3.검색 4.출력 5.종료\n");
scanf("%d", &num);  
switch (num) 
{
case 1:    
printf("삽입 할 수를 입력하세요.\n");    
scanf("%d", &data);  
if (insert(data) == 1)     
printf("처음 값 입니다. \n");   
else       
printf("삽입 완료 \n");   
system("pause");    
system("cls");  
break;     
case 2:         
printf("삭제 할 수를 입력하시오.\n");  
scanf("%d", &data); 
if (del(data) == 1)     
printf("삭제 완료 \n");     
system("pause");    
system("cls");   
break;    
case 3:     
printf("검색 할 수를 입력하세요.\n");     
scanf("%d", &data);
if (find(data) != 0)   
printf("찾은 수는 %d 입니다.\n", find(data)); 
else        
printf("찾으신 수는 없습니다.\n");    
system("pause");  
system("cls"); 
break;    
case 4:   
print();     
system("pause"); 
system("cls");   
break;     
case 5:  
printf("종료합니다.\n");  
system("pause"); 
system("cls");      
return 0;
system("cls");  
}
}
}



