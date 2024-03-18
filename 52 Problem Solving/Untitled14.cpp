#include <stdio.h>
int main(){
	  int a,b,c,d,e;
	  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	  printf("Enter 5 mans height :%d m %d m %d m %d m %d m",a,b,c,d,e);
	  if(a>b && a>c&& a>d && a>e){
	  	printf("The tall person is: %d",a);
	  }
	  else if(b>c && b>d && b>e){
	  	printf("The tall person is: %d",b);
	  }
	  else if(c>d && c>e){
	  		printf("The tall person is: %d",c);
		  }
	  else if(d>e ){
	  		printf("The tall person is: %d",d);
		  }
	  else{
	  	printf("The tall person is: %d",e)
	  }	  	  
    
	return 0;
}
