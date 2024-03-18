#include <stdio.h>

int main() {
	int n[2][12]={{722,316,598,102,455,256,634,334,574,580,670,933},
	{517,402,645,98,310,401,589,357,680,535,674,843}};
	int i,j,a,s[2];
	for(i=0;i<2;i++){
		for(j=0;j<12;j++){
			s[i]+=n[i][j];
		}
		printf("Nud %d : %d\n",i+1,s[i]);
	}
	if(s[0]>s[1]){
		printf("vision moga nudles 1 Frist");
	}
	else{
		printf("Akan kabo nudles 2 Frist");
	}
	return 0;
}


