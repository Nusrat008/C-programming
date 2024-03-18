#include<stdio.h> 
int main(){ 
    int num; 
    printf("Enter a Number: "); 
 	scanf("%d",&num); 
    switch(num > 0){
        case 1 : 
        printf("%d is Positive",num); 
 	 	break; 
        case 0 : 
        if(num < 0){ 
 	 	printf("%d is Negative",num); 
        }else{ 
 	 	printf("Zero"); 
 	 	} 
 	 	break;
        } 
    return 0; 
} 
