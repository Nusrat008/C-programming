#include<stdio.h>
int main(){
	float r,area,v,p=3.1416;
	scanf("%f",&r);
	area = 4*p*r*r;
	v=4*p*r*r*r/3;
	printf("surface area:%.2f\n",area);
	printf("v is :%.2f\n",v); 
	return 0;
}
