#include<stdio.h>
// function prototype to find factorial of given number
int fact(int);
int main(){
    printf("ID : 1902041\n");   
    int num,facto;
    //Take input a number to find factorial
    printf("Enter the Number to Find Factorial :");
    scanf("%d",&num);
    //Call function to find the factorial of the numbers
    facto=fact(num);
    printf(" %d! = %d",num,facto);
 
    return 0;
}
// function to find factorial of given number
int fact(int n)
{
    if(n==0)
        return(1);
    return(n*fact(n-1));
}
