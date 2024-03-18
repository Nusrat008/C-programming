#include<stdio.h>
#include<math.h>
int main(){
	float x;
	scanf(" %f",&x);
	float n = pow(x,5)-3*pow(x,4)-7*pow(x,3)+13*pow(x,2)
	+3742;
	printf(" sum is %.2f\n",n);
	return 0;
}
