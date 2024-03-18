//Write a program to check odd or even number (d) using conditional operator
#include<stdio.h>
int main() {
	int num; 
	printf("Enter Number: ");
	scanf("%d",&num);
	while(num>1){
		num = num-2;
	}if(num==0)
		printf("Even Number");
	else
		printf("Odd Number");
	return 0;
}