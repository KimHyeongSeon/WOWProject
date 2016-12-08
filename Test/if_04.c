 


int _tmain(int argc, _TCHAR* argv[])
{
 int weight;
 
 printf("몸무게는??? ");
 scanf("%d",&weight);

 if(weight<=50.80)
 {
  printf("플라이급");
 }
 else if(weight<=61.23)
 {
  printf("라이트급");
 }
 else if(weight<=72.57)
 {
  printf("미들급");
 }
 else if(weight<=88.45)
 {
  printf("크루저급");
 }
 else
 {
  printf("헤비급");
 }

 

 system ("pause");
 return 0;
} 
