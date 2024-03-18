 #include <stdio.h>

int main() {
	int a,b,c,i,j,n,t,s,pascal[20][20];
	for(i=0;i<20;i++){
		pascal[i][0]=pascal[i][i]=1;
		for(j=1;j<i;j++){
			pascal[i][j]= pascal[i-1][j-1]+pascal[i-1][j];
		}
	}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d\n",pascal[n-1][i]);
		if(i==n-1)printf("\n");
		else printf("");
	}
	return 0;
}


