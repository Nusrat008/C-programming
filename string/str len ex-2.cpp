#include <stdio.h>
#include<string.h>
int main() {
	char a[50]="abcdefgh";
	char b[20];
	strcpy(b,a);
	printf("%s\n",a);
	printf("%s\n",b);
	strcat(b,a);
	printf("%s length:%d\n",b,strlen(b));
	
	int len=strlen(a);
	printf("Length equals %d\n",len);
	return 0;
}


