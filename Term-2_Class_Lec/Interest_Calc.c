/*Investment problem*/
//Interest Calculation

#include<stdio.h>
#include<math.h>



 /*  main program begins */

int main(){
    int year,p;
    float amount , value,inrate;

    printf("Enter value of amount , inrate,period\n");
    scanf("%f %f %d",&amount,&inrate,&p);
    
    year = 1;
    while(year<=p)
    {
        value = amount + inrate * amount;

        printf("%2d   %8.2f\n",year,amount);

        year = year + 1;
        amount = value;

    }

    return 0;
}






/*
//Value fixed
#include<stdio.h>
#include<math.h>

#define PERIOD 10
#define PRINCIPAL 5000.00

// main program begins 

int main(){
    int year;
    float amount , value,inrate;

    amount = PRINCIPAL;
    inrate = 0.11;
    year = 1;

    while(year<=PERIOD)
    {
        value = amount + inrate * amount;

        printf("%2d   %8.2f\n",year,amount);

        year = year + 1;
        amount = value;

    }

    return 0;
}

*/