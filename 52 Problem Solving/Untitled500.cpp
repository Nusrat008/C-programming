#include <stdio.h>

int main() {
	int i,j,a,b,c[8];
	for(i=0;i<8;i++){
		scanf("%d",&c[i]);
	}
	for(j=1;j<8;j++){
	
	for(i=0;i<7;i++){
		if(c[i]>c[i+1]){
			a = c[i];
			c[i]=c[i+1];
			c[i+1]=a;
		}
		}
	}
	for(i=0;i<8;i++){
		printf("The secrial num: %d\n",c[i]);
	}
		
		  
	
	
	
	return 0;
}


