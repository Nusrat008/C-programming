//Write a program to print the size of char, float, double and long double data types in C.
 #include<stdio.h> 
int main(){
    char charType;
    float floatType;
    double doubleType;
    long double long_double;
    printf("Size of char is: %ld bytes\n",sizeof(charType));
    printf("Size of float is: %ld bytes\n",sizeof(floatType));
    printf("Size of double is: %ld bytes\n",sizeof(doubleType));
    printf("Size of long double is: %ld bytes\n",sizeof(long_double));
    return 0;
}