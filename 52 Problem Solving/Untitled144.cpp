#include <stdio.h>

int main() {
	int n[6]={1,8,90,56,45,80},b,i,j;
	for(i=5;i>0;i--){
	 if(n[i]>n[i+1]){
	 	b = n[i];
	 	n[i]= n[i+1];
	 	n[i+1]=b;
	 }
	printf("%d  %d %d %d %d  %d  ",n[0],n[1],n[2],n[3],n[4],n[5]);
	}
	
	
	return 0;
}


