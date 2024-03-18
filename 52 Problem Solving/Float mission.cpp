#include <stdio.h>
int main ()
{
	float meter,feet,inch;
	scanf("%f",&meter);
	feet=meter*3.28084;
	inch = (feet -(int) feet)* 12;
	printf("%d feet %.2f inch\n",(int) feet,inch);
	return 0;
}
