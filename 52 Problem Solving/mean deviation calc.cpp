#include <stdio.h>

int main() {
	int i,j,a,b,c[5]={7,6,3,2,9};
	for(j=4;j>0;j--){
	
	for(i=0;i<j;i++){
		if(c[i]>c[i+1]){
			a = c[i];
			c[i]=c[i+1];
			c[i+1]=a;
		}
		}
	}
		printf("%d %d %d %d %d\n",c[0],c[1],c[2],c[3],c[4]);
		  
	
	
	
	return 0;
}


