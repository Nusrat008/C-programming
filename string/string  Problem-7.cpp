#include <stdio.h>

int main() {
	char a[30]="integr",b[30]="ation";
	int i,j,length=6;
	for(i=length,j=0;b[j]!='\0';i++,j++){
		a[i]=b[j];	
	}
	a[i]='\0';
	printf("%s\n",a);
	return 0;
}


