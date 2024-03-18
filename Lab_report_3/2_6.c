#include<stdio.h>
#include<conio.h>
int main()
{
    int num_of_terms, fib=0, fib1=1, fib2=1;
    printf("Enter the Number Of Terms:");
    scanf("%d",&num_of_terms); 
    printf("First %d Fibonacci numbers are: ",num_of_terms); 
    do
    {
        fib1=fib2;
        fib2=fib;
        fib=fib1+fib2;
        printf(" %d ",fib);
    }while(num_of_terms--);
    printf("\n");
    return 0;
}
