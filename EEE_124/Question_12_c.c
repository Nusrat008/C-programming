//Write a program to check odd or even number (c) without using bitwise and modulus operator
#include<stdio.h>
int main() {
	int num; 
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num/2*2==num)
	{
		printf("Even Number");
	}
	else
		printf("Odd Number");
	return 0;
}

