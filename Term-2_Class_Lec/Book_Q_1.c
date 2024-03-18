#include<stdio.h>



int main(){
	int i;
	printf("Please Enter an integer : \n");
	scanf("%d",&i);
	if(i<100){
		printf("%d is smaller than 100\n",i);
	}else{
		printf("Your number contains more than two digits\n");
	}
	
	return 0;
}
