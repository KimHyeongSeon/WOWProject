float min(float x, float y)
{
	if(x>y)
		return y;
	else
		return x;

}

#include<stdio.h>

int main()
{
	float x, y, f;

	scanf("%f",&x);
	scanf("%f",&y);
	f = min(x,y);
	printf("%f",f);
	return 0;
}
