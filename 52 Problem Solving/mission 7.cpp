#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='0'&&ch<='9'){
		printf("a digit");
	}
	else{
		printf("not a digit");
	}
	return 0;
}
