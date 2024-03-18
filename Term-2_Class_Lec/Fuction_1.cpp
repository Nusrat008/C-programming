#include<stdio.h>

//Takes nothing returns nothing
void main(){
	void add(void); //fucntion declaratoin or prototype
	add();
}
void add (void){
	int a,b,c;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	c = a+b;
	printf("sum is %d",c);
}



