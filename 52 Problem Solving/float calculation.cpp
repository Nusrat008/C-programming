#include<stdio.h>
int main(){
	float x;
	scanf(" enter %f",&x);
	float n = (x*x*x*x*x)-(3*x*x*x*x)-(7*x*x*x)+(13*x*x)+3742;
	printf(" sum is %.2f\n",n);
	return 0;
}
