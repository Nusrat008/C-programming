#include <stdio.h>

#define STRLEN 5
int readln(char s[],int maxlen) {
	int len_s;
	fgets(s,maxlen,stdin);
	len_s=strlen(s);
	if(s[len_s-1]=='\n'){
		s[len_s-1]='\0';
		len_s-=1;
	}
	rewind(stdin);
	
	return len_s;
}


