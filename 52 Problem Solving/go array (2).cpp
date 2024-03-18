#include <stdio.h>
int main() {
	 int a,v,i[2][5],s,c;
	 scanf("%d",&a);
	 printf("%d",a);
	 for(v=0;v<2;v++){
	 	for(c=0;c<5;c++){
		scanf("%d",&i[v][c]);
	 	printf("Roll %d",i[v][c]);
	    }
	}
	return 0;
}


