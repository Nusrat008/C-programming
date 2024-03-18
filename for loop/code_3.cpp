#include <stdio.h>

int main(){
	int a;
	printf("Enter a number: ");

    scanf("%d",&a);
    if(a%5==0 && a%11==0){
        printf(" Yes the number is divided\n");
    }

	return 0;
}
