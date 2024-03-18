#include <stdio.h>

int main() {
	char str[30]="madam",str_new[30];
	int i,j=0;
	for(i=4;i>=0;i--){
		str_new[j]=str[i];
		j=j+1;	
	}
	str_new[j]='\0';
	printf("%s\n",str_new);
	return 0;
}


