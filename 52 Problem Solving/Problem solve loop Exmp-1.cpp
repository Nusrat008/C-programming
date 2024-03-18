#include <stdio.h>

int main() {
	int a,b,n,s,i;
	scanf("%d%d",&a,&b);
	 if(a>b){
	 	n=a;
	 }
	 else{
	 	n=b;
	 }
	 for( ; ;i++){
	 	if(n%a==0 && n%b==0){
	 		break;
		 }
	 }
	 printf("%d\n",n);
	return 0;
}


