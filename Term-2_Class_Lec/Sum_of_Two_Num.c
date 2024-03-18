//Sum of two floating number in integer

 
 #include<stdio.h>
 #include<math.h>

 int main(){
     float a,b;
     int sum;

     printf("Enter two float number : \n");
     scanf("%f %f",&a,&b);

     sum = a + b;

     //printf("Sumation of Two floating is : %d\n",sum);
     printf("Values are,\nX = %.2f, Y = %.2f, Z = %d\n",a,b,sum);

     return 0;
 }