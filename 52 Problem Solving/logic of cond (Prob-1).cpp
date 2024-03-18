#include <stdio.h>

int main() {
	int a,b,n,i,max,min;
	scanf("%d",&n);
	scanf("%d",&a);
	a = max = min;
	for(i=1;i<n;i++){
		scanf("%d",&a);
		if(a>max) max= a;
		if(a<min)min = a;
	}
	printf("Maximum :%d\n",max);
	printf("Minimum :%d\n",min);
	return 0;
}


