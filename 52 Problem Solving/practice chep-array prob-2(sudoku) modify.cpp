#include <stdio.h>

int main() {
	 int s[9][9];
	 int sum=0,i,n,j,e,a,b,c,ok;
	 for(i=0;i<9;i++){
	 	for(j=0;j<9;j++){
	 		scanf("%d",&s[i][j]);
		 }
	 }
	 for(i=0;i<9;i++){
	 	for(j=0;j<9;j++){
	 	sum+=s[i][j];
	 }
	 if(sum!=45){
	 	ok=0;
	 }
	 }
	 for(i=0;i<9;i++){
	 	for(j=0;j<9;j++){
	 		sum+=s[j][i];
		 }
		 if(sum!=45){
		 	ok=0;
		 }
	 }
	 for(i=1;i<=7;i+=3){
	 	for(j=1;j<=7;j+=3){
	 		sum=s[i-1][j-1]+s[i-1][j]+s[i-1][j+1];
	 		sum+=s[i][j-1]+s[i][j]+s[i][j+1];
	 		sum+=s[i+1][j-1]+s[i+1][j]+s[i+1][j+1];
	 		if(sum!=45){
	 			ok=0;
			 }
		 }
	 }
	 for(i=0;i<9;i++){
	 	for(j=0;j<9;j++){
	 		n=s[i][j];
	 		if(n<1 || n>9){
	 			ok=0;
			 }
		 }
	 }
	 if(ok=0){
	 	printf("wrong");
	 }
	 else{
	 	printf("correct");
	 }
	 
	return 0;
}


