#include <stdio.h>

int main() {
	int a,b,s,c=0,n,i,j,x,y;
	int g[12][12],l[20][2];
	scanf("%d%d",&c);
	for(i=0;i<c;i++){
		scanf("%d%d",&l[i][0],&l[i][1]);
	}
	for(i=0;i<c;i++){
		x = l[i][0];
		 y = l[i][1];
		g[x-1][y-1]+=1;
		g[x-1][y]+=1;
		g[x-1][y+1]+=1;
		g[x][y-1]+=1;
		g[x][y+1]+=1;
		g[x+1][y-1]+=1;
		g[x+1][y]+=1;
		g[x+1][y+1]+=1;
	}
	for(i=0;i<c;i++){
		x=l[i][0];
		y=l[i][1];
		g[x][y]=100;
	}
	for(i=1;i<11;i++){
		for(j=1;j<11;j++){
			if(g[i][j]==100)printf("*");
			else printf("%d",g[i][j]);
		}
		printf("\n");
	}
	return 0;
}


