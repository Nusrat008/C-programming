#include<stdio.h>
#include<math.h>
int find_gcd(int n1,int n2);
int main()
{
    int x,y,gcd,lcm;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    gcd = find_gcd(x, y);
    lcm = (x * y)/ gcd;
    printf("HCF = %d\n", gcd);
    printf("LCM = %d\n", lcm);
    return 0;
}
int find_gcd(int n1,int n2)
{
    if(n2>n1)
    {
        return find_gcd(n2,n1);
    }
    if(n2==0)
    {
        return n1;
    }
    else
    {
        return find_gcd(n2,n1%n2);
    }
}
