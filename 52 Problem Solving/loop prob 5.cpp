# include<stdio.h>
int main(){
	char c;
	int s=0;
	while(scanf("%c",&c) && c!='\n'){
		s+=c-'0';
	}
	printf("%d",s);
	return 0;
}
