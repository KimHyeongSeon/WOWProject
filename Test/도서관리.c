// 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

#define SIZE 100
struct Book 
{
  char bookname[100];//책이름 
  char wirter[50];//저자 
  int number;//책위치 책순서 1번째부터 채움 
  int genre;
};

int main()
{
  struct Book list[SIZE+1] = {0,};//구조체 배열 선언 , 초기화 
  int i;  
  int booknumber = 0;//책 순서 
  int input;// 메인메뉴 1,2,3,4 
  char input_wirter[100];//저자이름   
  printf("=========================도서관리프로그램=========================\\n"); 
  
  while (1)
  { 
    printf("\\n\\t1번:책추가\\n\\t2번 : 책리스트\\n\\t3번 : 도서검색(저자이름)\\n\\t4번 : 종료\\n"); 
    scanf("%d", &input);//메인 조작 버튼 입력받음  
    
    if (input == 1)//책추가 
    {
      system("cls"); 
      
      printf("책의 제목을 입력하세요: \\n\\t");
      scanf("%s",list[booknumber].bookname);//책이름입력      
      printf("책의 저자를 입력하세요 : \\n\\t");  
      scanf("%s", list[booknumber].wirter);//저자이름입력    
      printf("책의 장르를 입력하세요: (1번=만화   2번=공상과학   3번=고전\\n\\t");  
      scanf("%d", &list[booknumber].genre);//장르입력   
      printf("\\n\\t%s 가 추가되었습니다!!\\n\\n\\n\\n\\t",
             list[booknumber].bookname); 
      list[booknumber].number = booknumber + 1; //책순서 넘겨준다 처음에 0으로해서 +1   
      
      booknumber++ ;//+1 해주고       
      
      system("pause");   
      system("cls");   
      continue;      
    }
    else if (input == 2)//책 리스트   
    {
      system("cls");
      for (i = 0; i < list[i].number != 0 ; i++)  
      {
        if (list[i].genre == 1) 
        {
          printf("No.%d = %s   저자 = %s    장르 : 만화\\n\\n", list[i].number, list[i].bookname, list[i].wirter);
        }
        if (list[i].genre == 2) 
        {
          printf("No.%d = %s   저자 = %s    장르 : 공상과학\\n\\n", list[i].number, list[i].bookname, list[i].wirter);  
        }
        if (list[i].genre == 3)  
        {
          printf("No.%d = %s 저자 = %s 장르 : 고전\\n\\n", list[i].number, list[i].bookname, list[i].wirter);
        }
      }
      printf("남은 도서 자리 = %d\\n\\n", SIZE - booknumber);    
      system("pause");   
      system("cls");   
      continue;  
    }
    else if (input == 3)//도서검색 
    {
      printf("검색 할 저자 입력 : \\n");
      scanf("%s", input_wirter);//입력    
      system("cls");       
      
      for (i = 0; i < SIZE; i++) 
      {
        if (strcmp(input_wirter, list[i].wirter) == 0)// 0이면 서로일치하는 문장    
        {
          if (list[i].genre == 1) 
          { 
            printf("검색결과: \\n");   
            printf("\\n책이름 : %s\\n저자 :%s\\n장르 : 만화\\n책 번호 : %d\\n\\n", list[i].bookname, list[i].wirter, list[i].number); 
          }
          if (list[i].genre == 2)     
          {
            printf("검색결과: \\n");
            printf("\\n책이름 : %s\\n저자 :%s\\n장르 : 공상과학\\n책 번호 : %d\\n\\n", list[i].bookname, list[i].wirter, list[i].number);
          }     
          if (list[i].genre == 3)     
          {
            printf("검색결과: \\n"); 
            printf("\\n책이름 : %s\\n저자 :%s\\n장르 : 고전\\n책 번호 : %d\\n\\n", list[i].bookname, list[i].wirter, list[i].number);
          }
        }
      }
    }
    else if(input == 4)//종료      
    {
      printf("종료\\n");   
      break; 
    }
    else//목록에 없는 입력     
    {
      system("cls"); 
      printf("다시 입력해 주세요.\\n\\n"); 
      continue;    
    } 
  }
  return 0;
}

