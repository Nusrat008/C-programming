//Series Fibonacci Number

#include<stdio.h>
#include<math.h>

int main(){
    int fib(int);
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf(" %d ",fib(i));
    }
    
    return 0;
}
int fib(int n){
    if(n==1||n==2)
    return (1);
    return (fib(n-1)+fib(n-2));
}