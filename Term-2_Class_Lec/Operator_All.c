

//*Sum of n terms of 1/n */

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
    float sum,n,t;
    sum = 0;
    printf("Enter vlaue of n \n");
    scanf("%f",&n);
    t = 1.0/n;
    while(n--){
        sum = sum + t; 
    }
    printf("Sum = %f\n",sum);
    
    return 0;
}




/*
#include<stdio.h>
#include<math.h>
#include<conio.h>


int main(){
    int a,b;
    b = 16  % -7;
    a = 5<=8 && 6!=5; //if condition  is true a = 1,false= 0;
    printf("%d\n%d",a,b);
    getch();

    return 0;
} 
*/