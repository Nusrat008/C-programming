#include <stdio.h>
#include<string.h>
int main() {
	char c, n1[50],n[50];
	int i,j,len;
	gets(n1);
	len=strlen(n1);
	for(i=0;i<len;i++){
		if(n1[i]=='a'&&n1[i]=='e'&&n1[i]=='i'&&n1[i]=='o'&&n1[i]=='u'){
		n[i]=n1[i];
		}
	}
	puts(n);
	return 0;
}


