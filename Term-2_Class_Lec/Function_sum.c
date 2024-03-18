
#include<stdio.h>
#include<math.h>

int sum(int a,int b);

int main(){
    int a,b;
    printf("enter two integer: ");
    scanf("%d%d",&a,&b);
    sum(a,b);

}
int sum(int a,int b){
    float s =0,sub,div;
    s = a+b;
    sub = a-b;
    if(a>b){
    div = a/b;
    }
    else{
        div = b/a;
    }
    printf("The sum of two numbers: %lf\n",s);
    printf("The subtraction of two numbers: %lf\n",sub);
    printf("The division of two numbers: %lf\n",div);

}
