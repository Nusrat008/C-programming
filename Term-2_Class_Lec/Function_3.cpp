#include<stdio.h>

//Takes something returns nothing
void main(){
	int x,y;
	void add(int,int); //fucntion declaratoin or prototype
	printf("Enter two numbers");
	scanf("%d %d ",&x,&y);
	add(x,y);
	
	add();
}
void add (int a,int b){
	//int a,b;
	int c;
//	printf("Enter two numbers\n");
//	scanf("%d %d",&a,&b);
	
	c = a+b;
	printf("sum is %d",c);
}



