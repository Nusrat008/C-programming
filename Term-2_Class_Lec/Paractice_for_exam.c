#include<stdio.h>
int main(){
int a=8,b=5;
printf("%d\n",a&b);
printf("%d\n",a&&b);

    return 0;
}
// int main(){
//     int i;
//     i = 8;
//     float w[i],g[i];
//     float cgpa=0,sum_wg=0,sum_w=0;
//     printf("Enter the credit hours and GPA for 8 semester:");
//     for(int j =0;j<8;j++){
//         scanf("%f",&w[j]);
//         scanf("%f",&g[j]);
//         sum_wg = sum_wg + (w[j]*g[j]);
//         sum_w = sum_w + (w[j]);
//     }
//     cgpa = (sum_wg /sum_w);
//     printf("Total cgpa = %f\n",cgpa);
//     return 0;
// }

// int main(){
//     float a,t,u;
//     float s;
//     printf("Please, enter the value of a ,t ,u : \n");
//     scanf("%f %f %f",&a,&t,&u);
//     s = ( (u*t) + (a*(t*t)/2) );
//     printf("The distance is: %.2f\n",s);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include <stdio.h>

// int binary_conversion(int);
// int main()
// {
//    int num, bin;

//    printf("Enter a decimal number: ");
//    scanf("%d", &num);
//    bin = binary_conversion(num);
//    printf("The binary equivalent of %d is %d\n", num, bin);
// }

// int binary_conversion(int num)
// {
//     if (num == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return (num % 2) + 10 * binary_conversion(num / 2);
//     }
// }
// void str_cat(){
//     char str1[100],str2[100];
//     printf("Enter two string: ");
//     scanf("%s%s",str1,str2);
//     strcat(str1,str2);
//     printf("Concatenated string: %s\n",str1);

// }
// int main(){
//     // char str1[100],str2[100];
//     // printf("Enter two string: ");
//     // scanf("%s%s",str1,str2);
//     // strcat(str1,str2);
//     // printf("Concatenated string: %s\n",str1);

//     str_cat();
//     return 0;
// }
// int main(){
//     int mark;
//     printf("Enter the mark of an student: ");
//     scanf("%d",&mark);

//         if (mark>=80 && mark<=100){
//         printf("GPA:A+ Grade:4.00");
//         }
//         else if (80>mark && mark>=75){
//         printf("GPA:A Grade:3.75");
//         }
//         else if (75>mark&& mark>=70){
//         printf("GPA:A- Grade:3.5");
//         }
//         else if (70>mark && mark>=65){
//         printf("GPA:B+ Grade:3.25");
//         }
//         else if (65>mark && mark>=60){
//         printf("GPA:B Grade:3.00");
//         }
//         else if (60>mark&& mark>=55){
//         printf("GPA:B- Grade:2.75");
//         }
//         else if (55>mark&& mark>=50){
//         printf("GPA:C+ Grade:2.5");
//         }
//         else if (50>mark && mark>=45){
//         printf("GPA:C Grade:2.25");
//         }
//         else if (45>mark && mark>=40){
//         printf("GPA:D Grade:2.00");
//         }
//         else if (mark<40 && mark>0){
//         printf("GPA:F Grade:0");
//         }
//         else{
//             printf("Invalid marks");
//         }

//     return 0;
// }
// //Reverse number
// int main(){
//     int num,temp,rev;
//     printf("enter an integer: ");
//     scanf("%d",&num);
//     temp = num;
//     rev = 0;
//     while(temp>0){
//         rev = rev*10 + temp%10;
//         temp = temp/10;
//     }
//     printf("Reverse number:%d",rev);
//     return 0;
// }
// int main()
// {
// 	int num,temp,sum_digit;
//     printf("Enter an integer: ");
//     scanf("%d",&num);
//     temp = num;
//     sum_digit = 0;
//     while(temp>0){
//         sum_digit +=temp%10;
//         temp = temp/10;
//     }
//     printf("Sum of digit: %d",sum_digit);
// 	return 0;
// }
// int main(void){
//     int a = 25,b=5,c =10,d =7;
//     printf("a%%b = %d\n",a%b);
//     printf("a%%c = %d\n",a%c);
//     printf("a%%d = %d\n",a/d);
//     printf("Ans = %i",a/d*d+a%d);
//     return 0;
// }
// int main(){
//      int a,b,rem,gcd;
//      printf("Enter two integer: ");
//      scanf("%d%d",&a,&b);
//      rem = a%b;
//      while(rem!=0){
//          a = b;
//          b = rem;
//          rem = a%b;
//      }
//     gcd = b;
//      printf("GCD : %d\n",gcd);
//      return 0;
// }
// int main(){
//     int n1,n2,a,b,rem,gcd,lcm;
//     printf("Enter two integer: ");
//     scanf("%d%d",&n1,&n2);
//     a = n1;
//     b = n2;
//     rem = a%b;
//     while(rem!=0){
//         a = b;
//         b =rem;
//         rem = a%b;
//     }
//     gcd = b;
//     lcm = (n1*n2)/gcd;
//     printf("GCD = %d\n LCM = %d\n",gcd,lcm);
//     return 0;
// }
// float max(float a[]){
//     float maximum = a[0];
//     float min;
//     int size = 6;
//     for(int i =1;i<size;i++){
//         if(a[i]>maximum){
//             maximum = a[i];
//         }
//     }
//     return(maximum);
// }
// float avg(float arr[]){
//     float sum=0,avg_sum;
//     int size = 5;
//     for(int i =0;i<size;i++){
//         sum = sum + arr[i];
//     }
//     avg_sum = sum/size;
//     return(avg_sum);
// }
// float sd(float arr[]){
//     float avg_sum=0,sd=0;
//     int n = 5;
//     for(int i =0;i<n;i++){
//         avg_sum = avg_sum + arr[i];
//     }
//     avg_sum = avg_sum/n;
//     for(int i = 0;i<n;i++){
//         sd = sd + pow((avg_sum - arr[i]),2);
//     }
//     sd = sqrt(sd/n);
//     return(sd);
// }
// int main(){
//     int n;
//     printf("Enter the size of array: ");
//     scanf("%d",&n);
//     float arr[100] = {2.2,12.2,7.3,8.2,9.5};

//     float maxima = sd(arr);
//     printf("s deviation number: %f\n",sd(arr));
//     return 0;
// }
// int main(){
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if((year%4==0) && ((year%400==0) || (year%100!=0)))
//     {
//         printf("Leap year");
//     } else {
//         printf("Not a leap year");
//     }
//     return 0;
// }
//#include<string.h>
// int main(){
//     char str1[100],str2[100];
//     printf("Enter two string: ");
//     scanf("%s%s",str1,str2);
//     strupr(str1);
//     strupr(str2);
//     strcat(str1,str2);
//     FILE *fptr;
//     fptr = fopen("Test.txt","e");
//     fprintf(fptr,"%s",str1);
//     return 0;
// }
// int main()
// {
//     int a,b,c,largest;
//     printf("Enter 3 integer numbers: ");
//     scanf("%d%d%d",&a,&b,&c);

//     if(a>b){
//         largest = a;
//     }
//     else{
//         largest = b;
//     }
//     if (largest>c){
//         printf("Largest number: %d\n",largest);
//     }
//     else{
//         printf("Largest number: %d\n",c);
//     }
//     return 0;
// }

// int main(){
//     int i;
//     i = 8;
//     float w[i];
//     float g[i];
//     float cgpa=0;
//     float up=0;
//     float down=0;
//     printf("Enter the credit hours and GPA for 8 semester:");
//     for(int j =0;j<8;j++){
//         scanf("%f",&w[j]);
//         scanf("%f",&g[j]);
//         up = up + (w[j]*g[j]);
//         down = down + (w[j]);
//     }
//     cgpa = (up /down);
//     printf("Total cgpa = %f\n",cgpa);
//     return 0;
// }
// int main(){
//     int m = 7;
//     int y;
//     y = m++;
//     printf("%d\n",y);
//     y = ++m;
//     printf("%d\n",y);
//     return 0;
// }
// #define SQUARE(x) x*x
// int main(void){
//     printf("%\n",SQUARE(5));
//     printf("%\n",SQUARE(5+5));
//     printf("%\n",SQUARE(5*5));
//     return 1000;
// }

// int main(){
//     int n,sub;
//     printf("Enter number of student: ");
//     scanf("%d",&n);
//     printf("Enter number of subject: ");
//     scanf("%d",&sub);
//     int marks[n][sub];
//     int total[n];
//     for(int i =0;i<n;i++){
//         total[i] = 0;
//         for(int j=0;j<sub;j++){
//             printf("marks[%d][%d] = ",i+1,j+1);
//             scanf("%d",&marks[i][j]);
//             total[i] = total[i] + marks[i][j];
//         }
//     }
//     for(int i =0;i<n;i++){
//         printf("Student %d = %d\n",i+1,total[i]);
//     }
//     return 0;
// }
// int main(){
//     int i,j;
//     i = 1;
//     do
//     {
//     for(j = 1;j<=10;j++){
//         printf("%d\t",i*j);
//     }
//     printf("\n");
//     i = i+1;
//     }
//     while(i<=12);
//     return 0;
// }
// #include<math.h>
// int main(){
//     float r,l,c,freq;
//     printf("Enter the values for R and L: ");
//     scanf("%f%f",&r,&l);
//     c = 0.01;
//     while(c<=0.1){
//     if((1/ (l*c)) >= (pow(r,2) / (4*pow(c,2)))){
//     freq = sqrt((1/(l*c))-(pow(r,2)/(4*pow(c,2))));
//     printf("Frequency = %0.2f for C = %0.2f\n",freq,c);
//     }
//     else{
//         printf("The values of R and L are Invalid\n");
//         break;
//     }
//     c = c + 0.01;
//     }
//     return 0;
// }

// main()
// {
// unsigned x = 1;
// signed char y = -1;
// if(x>y)

// printf("x>y");
// else
// printf("x<=y");
// }

// int main(){
//     float celsius,fahrenheit;
//     printf("Enter temperature in celsius: ");
//     scanf("%f",&celsius);
//     fahrenheit =((9*celsius)/5)+ 32;
//     printf("%0.2f Celsius = %0.2f Fahrenheit\n",celsius,fahrenheit);
//     return 0;
// }
// int factorial(int n)
// {
//     int fact;
//     if(n==1){
//         return(1);
//     }
//     else{
//         fact =n*factorial(n-1);
//     }
//     return(fact);
// }
//  int main(){
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d",&num);
//     printf("%d! = %d\n",num,factorial(num));
//     return 0;
// }
// int main(){
//     int num;
//     scanf("%d",&num);
//     if(num%3==0){
//         printf("multi of 3\n");
//     }
//     if(num%5==0){
//         printf("multi of 5\n");
//     }
//     return 0;
// }
// int main()
// {
//     int height,tricket;
//     scanf("%d",&height);
//     tricket = height>=36;
//     printf("Need tricket: %d",tricket);

//     return 0;
// }
