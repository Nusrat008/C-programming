// Finding sqare sum  for n integers
#include<stdio.h>
#include<math.h>

int main()
{
    
    float x[10],value_xi,total_sum;
    int i;

    total_sum=0;

    printf("Enter 10 real numbers: ");

    for(i = 0;i<10;i++)
    {
        scanf("%f",&x[i]);
        //x[i] = value_xi;
        //total_sum = total_sum + pow(x[i],2);
        total_sum += pow(x[i],2);
        printf("\nx[%2d] = %5.2f\n",i+1,x[i]);
    }
    printf("\nTotal = %.2f\n",total_sum);

    return 0;
}

