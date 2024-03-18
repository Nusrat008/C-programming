#include<stdio.h>
#include<math.h>

#define PI 3.1418
#define MAX 180

int main(){
	int angle;
	float x,y;
	angle =0;
	printf(" Angle  cos(angle)\n");
	while(angle<= MAX)
	{
		x= (PI/MAX)*angle;
		y = cos(x);
		printf("%4d %13.2f\n",angle,y);
		angle = angle + 10;
	}
}
