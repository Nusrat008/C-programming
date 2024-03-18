#include <stdio.h>
#include <string.h>
int main() {
	char key[27],msg[100];
	int i,len;
	gets(key);
	while(gets(msg)!=0){
		len=strlen(msg);
		for(i=0;i<len;i++){
			char c=msg[i];
			if(c>='a'&&c<='z'){
				msg[i]=key[c-'a'];
			}
			else if(c>='A'&&c<='Z'){
				msg[i]=key[c-'A']+'A'-'a';
			}
		}
		puts(msg);	
	}
	return 0;
}


