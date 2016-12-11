#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int ** alloc(int Row, int Col);
void print(int** Result, int Row, int Col);
void _free(int** Result, int Row);
int** alloc(int Row, int Col)
{ 
  int** Result = NULL;
  int i = 0;
  
  if (Row > 0 && Col > 0)
  { 
    Result = (int**)malloc(sizeof(int*) *Row);
    
    if (NULL != Result)
    {  
      for (i = 0; i < Row; i++)   
      {   
        Result[i] = (int*)malloc(sizeof(int)*Col);  
        
        if (NULL != Result[i])  
        {   
          memset(Result[i], 0, sizeof(int)*Col); 
        }   
        else   
        {  
          int j = 0; 
          
          for (i = 0; j < i; j++)   
          {    
            free(Result); 
            Result[i] = NULL; 
          }    
          Result = NULL; 
          break; 
        }  
      } 
    } 
  } 
  return Result;
}

void print(int** Result, int Row, int Col)
{ 
  int i = 0, j = 0;
  
  if (NULL != Result&&Row > 0 && Col > 0)
  {  
    for (i = 0; i < Row; i++) 
    {  
      for (j = 0; j < Col; j++) 
      {   
        printf("%d", Result[i][j]);
      }  
      
      printf("\n"); 
    }
  }
}

void _free(int** Result, int Row)
{
  int i = 0, j = 0;
  
  if (NULL != Result && Row > 0)
  {
    for (i = 0; i < Row; i++)
    {
      if (NULL != Result[i])  
      { 
        free(Result[i]); 
      } 
    }
    free(Result);
  }
}

int main(void)
{
  int row = 2, col = 3;
  int i = 0 , j = 0;
  int **Result = NULL;
  Result = alloc(row, col);
  
  if (NULL != Result) 
  {
    printf("값 설정 전\n"); 
    print(Result, row, col);
    printf("값 설정 후: \n");
    Result[0][0] = 1;
    Result[0][2] = 2;
    Result[1][0] = 3;
    Result[1][2] = 4;
    
    print(Result, row, col);
    _free(Result, row);
  }
  
  return 0;
}
