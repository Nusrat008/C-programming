#include<stdio.h>
int main(){
	int f,por,pha,til;
	printf(" enter the size of fathar shoes  \n");
	scanf("%d",&f);
	printf("enter the size of shoes of porbot, pahar and tila gradually\n");
	scanf("%d %d %d ",&por,&pha,&til);
	if (f==por){
		printf("porbhat will get it");
	}
	else if (f==pha){
		printf("pahar will get it");
	}
		else if (f==til){
		printf("tila will get it");	
	}
	else {
		printf("it will go for online sell");
		
	}
}
