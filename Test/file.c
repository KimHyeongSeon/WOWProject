#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char*,char*);

int main()
{   
char buffer[200]; //파일의 문자열 저장  
char *word,*string[100];  //word 단어 구분, string 단어를 저장 해줄 배열  
int i, n, count = 0,
num[100]={0};  

FILE *fp;  //파일 변수명  
fp = fopen("data.txt", "r"); //(r)읽기 모드로 파일 열기, fp에 대입 

if(fp == NULL) //fp 파일에서 NULL을 만나면  
{    
printf("file open error\n");  //에러 메세지 띄운 후   
exit(0); //종료  
}   

fgets(buffer,200,fp);  //fp(파일포인터)데이터를 buffer(문자열의 주소)에 저장  
word = strtok(buffer, " "); // 공백 문자로 단어 구분, strkok 문자열을 분리해주는 역활을 함  

while(word) 
{      
for(i=0; i<count; i++)    
{         
if(check(word,string[i]))//단어가 있을 때        
{           
num[i]++; //단어 개수 증가        
break;               
} 
}   
if(i == count) //단어가 없을 때  
{       
string[count] = word; //배열에 새로운 단어 저장    
num[count]++; //개수 증가   
count++; //그 단어의 전체 개수 증가   
}     
word = strtok(NULL," ");//(인터넷 서치)
}  
for(i=0; i<count; i++)//반복문  
{     
printf("%s : %d ", string[i], num[i]);   //빈도 수 *로 출력  

for(n=0; n<num[i]; n++)//반복문 개수 만큼 *출력   
{    
printf(" *"); // * 출력   
} 
printf("\n");   
}  
return 0;
}

int check(char* word, char* str)
{ 
int i;   

if(strlen(word) != strlen(str)) //파일의 단어와 배열에 저장된 단어가 다를 시 
{
return 0; 
}  
for(i=0; i < strlen(word);

i++)//파일 단어의 길이 만큼 반복   
{    
if(word[i] == str[i] || word[i]+32 == str[i] || word[i] == str[i]+32) //대소문자,길이와 스펠도 같을 시   

continue;  

else //길이는 같고 스펠은 다를 시    
return 0; 
}  
return 1;

}   

