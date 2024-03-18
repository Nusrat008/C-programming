#include<stdio.h>
#include<math.h>
int main(){
    int len;
    printf("Enter number of integer: ");
    scanf("%d",&len);
    double num[len],sum=0,mean,diff,sqrt_diff,dev;
    printf("Enter %d number: ",len);
    for(int i =0;i<len;i++){
    scanf("%lf",&num[i]);
    sum +=num[i];
    }
    mean = sum/10;
    for(int i =0;i<len;i++){
        diff = mean- num[i];
        sqrt_diff  +=pow(diff,2);
    }
    dev = sqrt(sqrt_diff/len);
    printf("Mean of number is %lf\n",mean);
    printf("The deviation is : %lf\n",dev);

    return 0;
}