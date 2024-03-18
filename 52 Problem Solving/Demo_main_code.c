// #include<stdio.h>
// #include<math.h>
// int main()
// {

//     return 0;
// }

/*
#include<stdio.h>
#include<math.h>
void pascal(int n);
int main()
{
    int n = 5;
    pascal(n);
    
    return 0;
}
void pascal(int n)
{
    for (int line = 1; line <= n; line++)
    {
        int c = 1;
        for (int i = 1; i <= line; i++)
        {
            printf("%d ",c); 
            //cout<< c<<" ";
            c = c * (line - i) / i;
        }
        printf("\n");
        // cout<<"\n";
    }
}
*/







// void printPascal(int n)
// {
     
// for (int line = 1; line <= n; line++)
// {
//     int C = 1; // used to represent C(line, i)
//     for (int i = 1; i <= line; i++)
//     {
         
//         // The first value in a line is always 1
//         cout<< C<<" ";
//         C = C * (line - i) / i;
//     }
//     cout<<"\n";
// }
// }
 
// // Driver code
// int main()
// {
//     int n = 5;
//     printPascal(n);
//     return 0;
// }





#include <stdio.h>
int main()
{
    int col, rows, space, i, j;
    printf("Enter number of rows: ");//enter number of rows for generating the pascal triangle
    scanf("%d",&rows);
    for(i=0; i<rows; i++)            // outer loop for displaying rows
    {
        for(space=1; space <= rows-i; space++)  // space for every row starting
            printf("  ");
        for(j=0; j <= i; j++)     // inner loop for displaying the pascal triangle of numbers
        {
            if (j==0 || i==0)     // either outer loop value or inner-loop value is "0 " it prints 1
                col = 1;
            else
                col = col*(i-j+1)/j;  //calculate the coefficient
            printf("%4d", col);
        }
        printf("\n");
    }
    return 0;
}