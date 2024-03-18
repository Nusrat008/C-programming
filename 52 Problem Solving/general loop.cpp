#include <stdio.h>

int main() {
	char c;
	int n;
	while(scanf("%c",&c) && c!='\n'){
		n+=c-'0';
	}
	if(n%3==0){
		printf("Yes\n");
	} 
	else{
		printf("No\n");
	}
	
	return 0;
}


