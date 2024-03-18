#include <stdio.h>
#define bangla 10
#define english 15
#define Bangla 25
int sub_n1(int x){
	return x+bangla;
}
int exam_s2(int x){
	return x+english;
}
int result_sub(int num){
	int animal;
	animal=num+Bangla;
	return animal;
}

int main(int argc,char**argv) {
	printf("%d\n",sub_n1(300));
	printf("%d\n",exam_s2(400));
	printf("%d\n",result_sub(500));
	return 0;
}


