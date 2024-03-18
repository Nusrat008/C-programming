#include <stdio.h>
int main ()
{
	float meter ,cm,total_inch,inch;
	int feet;
	scanf("%f",&meter);
	cm = meter*100;
	total_inch = cm* 0.393701;
	feet = (int) (total_inch/12);
	printf("%d feet %.2f inch\n",feet,inch);
	return 0;
	
} 

