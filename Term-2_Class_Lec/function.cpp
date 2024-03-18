#include<stdio.h>




int main(){
a();
b();
a();	
}

void a(){
	printf("hello\n");
}
void b(){
	a();
}
