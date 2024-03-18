#include<stdio.h>
int main(){
	printf("enter 3 number");
	float a,b,c,sum;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	printf("the three number is %f %f %f",a,b,c);
	sum=a+b+c;
	float avg=sum/3;
	printf("the average of three  number is %.2f",avg);
}
