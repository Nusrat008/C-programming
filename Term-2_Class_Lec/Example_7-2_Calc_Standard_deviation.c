
//Calculate standard deviation, mean and variance


#include<stdio.h>
#include <math.h>

#define MAXVALUE 200

int main( )
 {
    int i,n;
    float  array_xi[MAXVALUE],sum_xi,mean,variance,sum_var,SD;

    sum_xi = 0;
    n = 0;
    
    printf("Input values of x: input -90 to end \n");
    for (i=1; i< MAXVALUE; i++)
    {
        scanf("%f", &array_xi[i]);

        if(array_xi[i] == -90)
            break;
        sum_xi += array_xi[i];
        //n += 1;
        n++;
    }
    mean = sum_xi/(float)n;

    for(i=1;i<=n;i++)
    {
        sum_var+=pow((array_xi[i]-mean),2);
    }
    variance = sum_var/(float)n;
    SD = sqrt(variance);


    printf("\nMean : %f\nVariance : %f\n", mean,variance);
    printf("Standard deviation : %f\n", SD);

    return 0;
 }










// #include<stdio.h>
// #include <math.h>

// #define MAXSIZE 100

// int main( )
//  {
//  int i,n;
//  float value [MAXSIZE], deviation,
//  sum,sumsqr,mean,variance,stddeviation;
//  sum = sumsqr = 0;
//  n=0;
//  printf("Input values: input -1 to end \n");
//  for (i=1; i< MAXSIZE ; i++)
//  {
//  scanf("%f", &value[i]);
//  if (value[i] == -1)
//  break;
//  sum += value[i];
//  n += 1;
//  }
//  mean = sum/(float)n;
//  for (i = 1 ; i<= n; i++)
//  {
//  deviation = value[i] - mean;
//  sumsqr += deviation * deviation;
//  }
//  variance = sumsqr/(float)n ;
//  stddeviation = sqrt(variance) ;
//  printf("\nNumber of items : %d\n",n);

//  printf("Standard deviation : %f\n", stddeviation);
//   printf("Mean : %f\nVariance : %f\n", mean,variance);

//  return 0;
//  }