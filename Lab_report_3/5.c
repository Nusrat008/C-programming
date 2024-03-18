#include<stdio.h>
#include<math.h>

float factorial(float n);
int main()
{
    int a,fact;
    printf("Enter an integer number: ");
    scanf("%d",&a);
    fact = factorial(a);
    printf("%d! = %d\n",a,fact);

    return 0;
}
float factorial(float n){
    int i=n;
    float fact=1;
   for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
