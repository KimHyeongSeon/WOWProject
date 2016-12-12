#include<stdio.h>
#define ABS(x)(x>0 ? x : -x)
#define AREA(w,h)(w*h/2)

main()
{
float a,b;	
int c,e,g;
	
	scanf("%f",&a);
	b = ABS(a);
	printf("%f\n",b);

	scanf("%d",&c);
	scanf("%d",&e);
	g = AREA(c,e);
	printf("%d",g);

	return 0;
}
