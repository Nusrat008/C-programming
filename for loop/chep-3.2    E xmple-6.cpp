 #include <stdio.h>

int main() {
	int a,b,c,i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		if(a%2==0){
			c=a/2;
			printf("The answer is:%d",c);
		}
		else if(a%2!=0){
			c=a*3;
			j=c+1;
			printf("The multiple is:%d",j);
		}
	}
	return 0;
}


