#include <stdio.h>

int main() {
	int  c;
	scanf("%d",&c);
	if(c>10){
		printf("Higher secondery");
	}
	else if(c>8){
		printf("Secondery");
	}
	else if(c>5){
		printf("Junior category");
	}
	else{
		printf("primary category");
	}
	
	return 0;
}


