#include "stdafx.h"
#include "stdlib.h"

int main()
{
	double celcius = 21.6;;
	double fahrenhelt = 110.3;
	double Acelcius;
	double Afahrenhelt;

	Acelcius = (fahrenhelt - 32) * 0.55;
	Afahrenhelt = (celcius * 1.8) + 32;

	
	printf("섭씨 %5.1lf도는 화씨 %5.1lf도이다\n", celcius, Afahrenhelt);
	printf("화씨 %5.1lf도는 섭씨 %5.1lf도이다.",  fahrenhelt, Acelcius);

	system("pause");
	return 0;
}
