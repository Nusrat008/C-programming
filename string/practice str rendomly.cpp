#include <stdio.h>
#include <string.h>
int main() {
	char s1[101],s2[101];
	char new_s[201];
	int length,i;
	gets(s1);
	gets(s2);
	length=strlen(s1);
	for(i=0;i<length;i++){
		new_s[2*i]=s1[i];
		new_s[2*i+1]=s2[i];
	}
	new_s[2*i]='\0';
	printf("%s",new_s);
	return 0;
}


