#include<stdio.h>

//Takes nothing returns something
void main(){
	int s;
	s = add();
	printf("sum is %d",s);
	
//	void add(int,int); //fucntion declaratoin or prototype
//	printf("Enter two numbers");
//	scanf("%d %d ",&x,&y);
//	add(x,y);

}
int add (){
	int a,b;
	int c;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	
	c = a+b;
//	printf("sum is %d",c);

	return 0;
}



