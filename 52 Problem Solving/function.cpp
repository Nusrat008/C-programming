#include<stdio.h>
int minimum(int a,int b){
	int temp;
	if(a<b){
		temp = a;
	}
	else{
		temp = b;
	}
	

	return temp;
}
int main(){
	int smaller,a,b;
	scanf("%d%d",&a,&b);
	smaller = minimum(a,b);
	printf("Samaller is:%d",smaller);
	return 0;
}
