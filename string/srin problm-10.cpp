#include <stdio.h>
#include <string.h>
int main() {
	char name[3][15]={"raihan","ramiz","papri"};
	int i;
	
	for(i=0;i<3;i++){
		printf("%s\n",name[i]);
	}
	return 0;
}


