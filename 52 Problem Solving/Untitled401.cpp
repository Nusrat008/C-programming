#include <stdio.h>

int main() {
	int b,c,s,e,n,a[19];
	printf("Enter the input:");
	scanf("%d",&n);
	 for(c=0;c<=n;c++){
	 	scanf("%d",&a[c]);
	 }
	 for(s=n;s>0;s--){
	 	for(c=0;c<s;c++){
	 		if(a[c]>a[c+1]){
	 		  e=a[c];
	 		  a[c]=a[c+1];
	 		  a[c+1]=e;
	 	}
		 }
	 }
	 for(c=0;c<=n;c++){
	 	printf("The num order : %d\n",a[c]);
	 }
	
	return 0;
}


