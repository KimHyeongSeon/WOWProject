#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct Book{ 
  //int code;  
  int price; 
  char name[20];  
  char writer[200];   
  char company[20];
};struct Book B;
//struct Book Search;

void BookAdd()
{  
  FILE *fp = fopen("book.txt","a");  
  printf("책 정보를 입력하세요 \n");   
  //printf("책코드 : " );   
  //scanf("%d",&B.code);  
  printf("책이름을 입력하세요 : " );  
  scanf("%s",B.name);; 
  printf("가격을 입력하세요 : ");   
  scanf("%d",&B.price);   
  printf("작가을 입력하세요 : ");  
  scanf("%s",B.writer);  
  printf("출판사를 입력하세요 : "); 
  scanf("%s",B.company);  
  
  fprintf(fp,"%s %d %s %s\n",B.name,B.price,B.writer,B.company);   
  fclose(fp);
}
void SearchBook()
{   
  char name[20];   char writer[20];  
  int index;   
  int i = 0;  
  FILE *fp=fopen("book.txt","r"); 
  printf("1.책이름으로 검색 2. 작가이름으로 검색 -> ");   
  scanf("%d",&index);  
  if(index==1)  
  {     
    printf("검색하실 책의 이름을 입력하세요\n");     
    scanf("%s",name);       
    while(fscanf(fp," %s %d %s %s",B.name,&B.price,B.writer,B.company)!=EOF)   
    {       
      i++;       
      if(strcmp(B.name,name)==0)       
      {          
        printf("찾으시는 책%s를 찾았습니다.\n",B.name);        
        printf("책이름 : %s \n 가격 : %d \n작가 : %s \n출판사 : %s\n",B.name,B.price,B. writer,B.company);         
        break;        
      }     
    }  
  }   
  else if(index==2)  
  {    
    printf("검색할 작가의 이름을 입력하세요\n");     
    scanf("%s", writer);    
    while(fscanf(fp,"%s %d %s %s",B.name,&B.price,B.writer,B.company)!=EOF) 
    {         i++;        
     if(strcmp(B.writer, writer)==0)       
    {          
       printf("찾으시는 '%s'작가의 '%s'를 찾았습니다.\n",B.writer,B.name);          
    
       printf("책이름 : %s \n 가격 : %d \n작가 : %s \n출판사 : %s\n",B.name,B.price,B.writer,B.company);          
       break;      
     }    
    }  
  }  
  if(i==0)   
    printf("찾는 책이 없습니다\n");   
  fclose(fp);
}

void ListBook()
 {  
    int i=0;  
  
  FILE *fp = fopen("book.txt","r");  
  while(fscanf(fp,"%s %d %s %s",B.name,&B.price,B.writer,B.company)!=EOF)
  {
    printf("책이름 : %s \n가격 : %d \n작가 : %s \n출판사 : %s\n",B.name,B.price,B.writer,B.company);   
    i++;      
  }  
  if(i==0)     
    printf("목록에 책이없습니다.\n");  
  fclose(fp);
}

void main()
{  
  char menu;  
  int count=0; 
  
  FILE *fp = fopen("book.txt","w");  
  fclose(fp);   
  
  while(1)  
  {      
    printf("메뉴를 입력하세요 -> 1.입력 2.탐색 3.전체목록 4.나가기: ");  
    menu=getche();
    fflush(stdin);    
    printf("\n");    
    if(menu == '1')  
    {        
      BookAdd();       
      count++;     
    }     
    
    else if(menu == '2')  
    {      
      SearchBook();      
    }     
    else if(menu=='3')       
      ListBook(); 
    else if(menu=='4')  
      break;     
    else        
      printf("메뉴를 다시 선택해주세요.\n"); 
  }
}

