//Write a program to calculate simple and compound interest.
//Simple Interest = (P*T*R)/100
//Compound Interest = P * ( (1+r/100 )t - 1)
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	 float p, t, r, simple, compound;
	 printf("Enter principal amount (p): ");
	 scanf("%f", &p);
	 printf("Enter time in year (t): ");
	 scanf("%f", &t);
	 printf("Enter rate in percent (r): ");
	 scanf("%f", &r);
	 simple = (p * t * r)/100.0;
	 compound = p * (pow(1+r/100, t) - 1);
	 printf("Simple Interest = %0.3f\n", simple);
	 printf("Compound Interest = %0.3f", compound);
	 getch();
	 return(0);
}
