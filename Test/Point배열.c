#include<stdio.h>


int get_operator();
int plus(int, int);
int minus(int, int);
int multiply(int, int);
int divide(int, int);

int get_operator()
{
  int choice;  
  while(1)    
  {
    printf("=======================\n");
    printf("0 : for plus\n");   
    printf("1 : for minus\n");
    printf("2 : for multiply\n");  
    printf("3 : for divide\n");   
    printf("4 : for quit\n");   
    printf("=======================\n");
    printf("Please Enter operator: ");
    scanf("%d", &choice);     
    
    if((choice >= 0) && (choice <=4))   
    {      
      return (choice);   
    }     
    else 
    {
      printf("Wrong Input, enter again!\n");    
    }  
  }
  return 0;
}

int main()
{
  int op;    
  int num1, num2;    
  int result; 
  int (*hanlde[4]) (int, int) = {plus, minus, multiply, divide} ;
  
  while(1)  
  {
    op = get_operator();    
    if(op == 4)  
    {
      printf("This is the end of program!\n");      
      return 0;   
    }
    printf("Enter the first operand : ");    
    scanf("%d", &num1);  
    printf("Enter the second operand :"); 
    scanf("%d", &num2); 
    result = hanlde[op] (num1, num2);   
    printf("\nthe result of operation is %d\n\n", result);
  } 
  return 0;
}


  |int plus(int n1, int n2)
  {
   return (n1+n2);
  }

  int minus(int n1, int n2)
  {
    return (n1-n2);
  }

  int multiply(int n1, int n2)
  {
    return (n1*n2);
  }

  int divide(int n1, int n2)
  {
    return (n1/n2);
  }
