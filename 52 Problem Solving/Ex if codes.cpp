#include <stdio.h>
int main(){
	int pin1,pin2;
	scanf("%d",&pin1);
	scanf("%d",&pin2);
	if(pin1==pin2){
		printf("The pin codes are equal.\n");
		
	}
	if(pin1!=pin2){
		printf("The pin codes are not equal.\n");
		
	}
	return 0;
}
