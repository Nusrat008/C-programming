#include<stdio.h>
#include<math.h>
int prime(int n);
int main()
{
    int num,i,count = 0;
    printf("Enter an integer: ");
    scanf("%d",&num);

    if(prime(num))
    {
        printf("%d is a Prime Number\n",num);
    }
    else{
        printf("%d is not a Prime Number\n",num);
    }
    return 0;
}
int prime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0; 
    }
    return 1;
}

