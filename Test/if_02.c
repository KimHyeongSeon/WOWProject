 

#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
 int tall;
 int weight;
 int fat;
 
 printf("키는??? ");
 scanf("%d",&tall);
 printf("뭄무게는??? ");
 scanf("%d",&weight);

 fat=weight+100-tall;

 if(0<fat)
 {
 printf("비만\n");
 printf("%d",fat);
 }

 


 system ("pause");
 return 0;
}
