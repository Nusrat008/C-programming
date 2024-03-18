#include <stdio.h>

int main() {
	char a[10]="bangla",b[10]="desh";
	int i,j,length;
	length=6;
	for(i=length,j=0;b[j]!='\0';j++,i++){
		a[i]=b[j];
	}
	a[i]='\0';
	printf("%s\n",a);
	
	return 0;
}


