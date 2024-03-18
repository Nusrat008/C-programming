#include <stdio.h>

int main() {
	int num1,num2;
	num1=10;
	num2=num1++;
	printf("num2=num1++ ,so num2=%d and num1=%d\n",num2,num1);
	num1=10;
	num2=++num1;
	printf("num2=++num1 ,so  num2=%d and  num1=%d\n",num2,num1);
	return 0;
}


