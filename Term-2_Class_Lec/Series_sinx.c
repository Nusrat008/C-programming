//Series of Sinx

#include<stdio.h>
#include<math.h>

#define ACCURACY 0.0001
#define PI 3.1416

float factorial(float n);

int main()
{
    float x,sum,term,power,x_radian;
    int i;

    printf("Enter value of X: ");
    scanf("%f",&x);

    i=1;
    power=3;
    sum=x;
    term=x;
    
    x_radian =(x*PI)/180; 

    //Extra
    float Value;
    Value = sin(x);
    printf("%.4f\n",Value);


    while(term>=ACCURACY)
    {
        term = pow(x,power) / factorial(power);
        power+=2;
        if(i%2==1)
        {
            sum =sum - term;
        }
        else
        {
            sum = sum + term;
        }


        i++;
    }

    printf("sin(%f) = %.4f\n",x,sum);
    
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


// int factorial(int n){
//     int i=n,fact=1;
//     for(i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }

//  CODE ###2#######
// #include<stdio.h>
// #include<math.h>

// #define LOOP 200
// #define ACCURACY 0.0001

// float factorial(float n){
//     int i=n;
//     float fact=1;
    
//    for(i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }


// int main(){
//     float x,sum,term,power;
//     int i;
//     float powx,fact;

//     printf("Enter value of x: ");
//     scanf("%f",&x);

//     i=1;
//     power=3;
//     sum=x;
//     term=x;

//     //Extra 
//     float Value;
//     Value = sin(x);
//     printf("%f\n",Value);
    
//     while(term>=ACCURACY){

//         term = pow(x,power) / factorial(power);
//         power+=2;
//         if(i%2==1){
//             sum =sum - term;
//         }
//         else{
//         sum = sum + term;
//         }

        
//         i++;
//     }

//     printf("the result of sum = %f i = %d",sum,i);
    

//     return 0;
// }







//CODE -=2
// #include<math.h>

// #define LOOP 200
// #define ACCURACY 0.0001

// float factorial(float n){
//     int i=n;
//     float fact=1;
    
//    for(i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }


// int main(){
//     float x,sum,term,power;
//     int i;
//     float powx,fact;

//     printf("Enter value of x: ");
//     scanf("%f",&x);

//     i=1;
//     power=3;
//     sum=x;
//     term=x;

//     //Extra 
//     float Value;
//     Value = sin(x);
//     printf("%f\n",Value);

//     while(term>=ACCURACY){

//         term = pow(x,power) / factorial(power);
//         power+=2;
//         if(i%2==1){
//             sum =sum - term;
//         }
//         else{
//         sum = sum + term;
//         }

        
//         i++;
//     }

//     printf("the result of sum = %f i = %d",sum,i);
    

//     return 0;
// }



// //code = 2:
// //  #include<stdio.h>
// //  //#include<conio.h>
// //  #include<math.h>
// //   double fact(double power)
// //      {
// //      double f=1;
// //     int k;
// //     for(k=1;k<=power;k++)
// //     f=f*k;
// //     return f;
// //     }
// //     void main()
// //     {
// //        int i=1,count=0;
// //      double x,term,deno,lob,sin,power=3;
// //      //clrscr();
// //      scanf("%lf",&x);
// //       term=x;
// //          sin=x;
// //       while(term>=0.0001)
// //       {
// //         lob=pow(x,power);
// //      deno=fact(power);
// //      term=lob/deno;
// //    power+=2;
// //     if(i%2==1)
// //     sin=sin-term;
// //      else
// //     sin=sin+term;
// //     i++;
// //     count++;
// //       }
// //       printf("the result= %lf count=%d",sin,count);
// //      //getch();
// //  }



















// // int factorial(int n){
// //     int i=n,fact=1;
// //     if(n==0)
// //     return 1;
// //     while(i--){
// //         fact=fact*i;
// //     }
// //     return fact;
// // }



// //code = 2:
// //  #include<stdio.h>
// //  #include<conio.h>
// //  #include<math.h>
// //   double fact(double power)
// //      {
// //      double f=1;
// //     int k;
// //     for(k=1;k<=power;k++)
// //     f=f*k;
// //     return f;
// //     }
// //     void main()
// //     {
// //        int i=1,count=0;
// //      double x,term,deno,lob,sin,power=3;
// //      //clrscr();
// //      scanf("%lf",&x);
// //       term=x;
// //          sin=x;
// //       while(term>=0.0001)
// //       {
// //         lob=pow(x,power);
// //      deno=fact(power);
// //      term=lob/deno;
// //    power+=2;
// //     if(i%2==1)
// //     sin=sin-term;
// //      else
// //     sin=sin+term;
// //     i++;
// //     count++;
// //       }
// //       printf("the result= %lf count=%d",sin,count);
// //      getch();
// //  }
