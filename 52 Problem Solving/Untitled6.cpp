#include<stdio.h>

 int addition(int a,int b){
	 	int c;
		c=a+b;	
		printf("%d",c);
		return c;	 	
	}	
	char exicute(){
		char c='a';
		return c;
	}
int main(){
	int a,b,d;
	printf("enter 2 number\n");
	scanf("%d",&a);
	scanf("%d",&b);
	d=addition(a,b);
	char c;
	c=exicute();
	return 0;
}
