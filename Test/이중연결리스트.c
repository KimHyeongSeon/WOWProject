#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

struct List 
{   
  char strData[11];    
  struct List *nextList;
};
struct CircleList 
{   
  struct List *List;
}; 

void insertFirstNode(struct CircleList *list, char *x); 
void main()
{    
  struct CircleList CL = { NULL };    
  insertFirstNode(&CL, "apple"); 
  insertFirstNode(&CL, "Banana");   
  insertFirstNode(&CL, "Orange");
  struct List* temp = CL.List;   
  do 
  {
    printf("%s\t", temp->strData);  
    temp = temp->nextList;  
  }
  while (temp != CL.List);  
  return;
}
void insertFirstNode(struct CircleList *list, char *x)
{
  struct List* newNode;
  newNode = (List*)malloc(sizeof(List));  
  newNode->nextList = NULL; 
  strcpy(newNode->strData, x);   
  strcpy(newNode->strData, x);   
  
  if (list->List == NULL) 
  {
    list->List = newNode;      
    newNode->nextList = newNode;  
  }
  else 
  {    
    List *temp = list->List;   
    while (temp->nextList != list->List)  
    { 
      temp = temp->nextList;     
    }
    newNode->nextList = temp->nextList;   
    temp->nextList = newNode;
    list->List = newNode;
  }
}

