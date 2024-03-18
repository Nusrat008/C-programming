#include <stdio.h>

int main() {
	int a,b,c=0,i,j,n,m,e;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		if(a%3==0){
			c=c+1;	
		}
	}
	printf("The total sum :%d",c);
	return 0;
}


