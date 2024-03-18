//Days to month
#include<stdio.h>
#include<math.h>

int main(){
    int m,d;
    printf("Enter days\n");
    scanf("%d",&d);
     
     m = d/30;
     d = d % 30;
     printf("Months = %d , Days = %d",m,d);



    return 0;
}



/*
#include<stdio.h>
#include<math.h>

int mul(int a,int b){
    int sub;
    sub = a*b;
    return sub;

}

int main(){
    int a,b;
    float m;
    a = 90; b = 23;
    m = mul(a,b);
    printf("The sub is %.3f\n",m);

    return 0;
}
*/