#include<stdio.h>
#include<math.h>
/*****
Function that calculates and returns the slope of the best fit line
Parameters:
N: no. of data-points
x[N]: array containing the x-axis points
y[N]: array containing the corresponding y-axis points
*****/
double slope(int N, double x[N], double y[N]){
    double m;
    int i;
    double sumXY=0;
    double sumX=0;
    double sumX2=0;
    double sumY=0;
    for(i=0;i<N;i++){
        sumXY=sumXY+x[i]*y[i];
        sumX=sumX+x[i];
        sumY=sumY+y[i];
        sumX2=sumX2+x[i]*x[i];
    }
    sumXY=sumXY/N;
    sumX=sumX/N;
    sumY=sumY/N;
    sumX2=sumX2/N;
    m=(sumXY-sumX*sumY)/(sumX2-sumX*sumX);
    return m;
}
/*****
Function that calculates and returns the intercept of the best fit line
Parameters:
N: no. of data-points
x[N]: array containing the x-axis points
y[N]: array containing the corresponding y-axis points
*****/
double intercept(int N, double x[N], double y[N]){
    double c;
    int i;
    double sumXY=0;
    double sumX=0;
    double sumX2=0;
    double sumY=0;
    for(i=0;i<N;i++){
        sumXY=sumXY+x[i]*y[i];
        sumX=sumX+x[i];
        sumY=sumY+y[i];
        sumX2=sumX2+x[i]*x[i];
    }
    sumXY=sumXY/N;
    sumX=sumX/N;
    sumY=sumY/N;
    sumX2=sumX2/N;
    c=(sumX2*sumY-sumXY*sumX)/(sumX2-sumX*sumX);
    return c;
}
main(){
    int N;
    printf("Enter the no. of data-points:\n");
    scanf("%d",&N);
    double x[N], y[N];
    printf("Enter the x-axis values:\n");
    int i;
    for(i=0;i<N;i++){
        scanf("%lf",&x[i]);
    }
    printf("Enter the y-axis values:\n");
    for(i=0;i<N;i++){
        scanf("%lf",&y[i]);
    }
    printf("The linear fit is given by the equation:\n");
    double m=slope(N,x,y);
    double c=intercept(N,x,y);
    printf("y = %lf x + %lf",m,c);
} 


/*
#include <stdio.h>

int main()
{
int p_amt,pay,dis,choice;
printf("Enter catagory 1 for mill cloth, 2 for Handloom items and\
 purchase amount: ");
scanf("%d %d",&choice,&p_amt);
switch(choice)
{
    case 1: if(p_amt<=100)
    dis=0;
    else if(p_amt<=200)
    dis=p_amt*0.05;
    else
    if(p_amt<=300)
    dis=p_amt*0.075;
    else
    if(p_amt>300)
    dis=p_amt*0.10;
    break;
    case 2: if(p_amt<=100)
    dis=p_amt*0.05;
    else if(p_amt<=200)
    dis=p_amt*0.075;
    else
    if(p_amt<=300)
    dis=p_amt*0.10;
    else
    if(p_amt>300)
    dis=p_amt*0.15;
    break;
    default: printf("Error in choise");
    break;
 }
pay=p_amt-dis;
printf("You have to pay %d",pay);
return 0;
}

*/