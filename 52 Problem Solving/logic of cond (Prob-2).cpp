#include <stdio.h>

int main() {
	int a,b,n,i,max,min;
	scanf("%d",&n);
	scanf("%d",&a);
 	max = min=a;
	for(i=1;i<n;i++){
		scanf("%d",&a);
		if(a>max)max=a;
		if(a<min)min=a;
		
	}
	printf("Max is: %d\n",max);
	printf("Min is : %d\n",min);
	return 0;
}


