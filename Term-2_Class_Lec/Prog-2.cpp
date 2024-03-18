#include<stdio.h>

int main(){
	float F,C;
	C = 300;
	F=((9*C)/5 + 32);
	printf("Celsius = %.2f to Fahreneit = %.3f\n",C,F);
	
	F=300;
	C=((F-32)*5/9);
	printf("\nFahrenhiet to Celsius = %.3f",C);
	
	
	return 0;
}
