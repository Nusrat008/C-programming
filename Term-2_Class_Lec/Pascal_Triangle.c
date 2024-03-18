//C Program To Pascal triangle
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
//          ##   EXtra code  ##
// #include <stdio.h>
// int main()
// {
//     int rows, cal = 1, space, i, j;
 
//     printf("Enter number of rows: ");//enter number of rows for generating the pascal triangle
//     scanf("%d",&rows);
 
//     for(i=0; i<rows; i++)            // outer loop for displaying rows
//     {
//         for(space=1; space <= rows-i; space++)  // space for every row starting
//             printf("  ");
 
//         for(j=0; j <= i; j++)     // inner loop for displaying the pascal triangle of numbers
//         {
//             if (j==0 || i==0)     // either outer loop value or inner-loop value is "0 " it prints 1
//                 cal = 1;
//             else
//                 cal = cal*(i-j+1)/j;  //calculate the coefficient
 
//             printf("%4d", cal);
//         }
//         printf("\n");
//     }
 
//     return 0;
// }






// #include<stdio.h>
// #include<math.h>
// int main()
// {

//     return 0;
// }


// #include <stdio.h>
// int main() {
//    int rows, coef = 1, space, i, j;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = 0; i < rows; i++) {
//       for (space = 1; space <= rows - i; space++)
//          printf("  ");
//       for (j = 0; j <= i; j++) {
//          if (j == 0 || i == 0)
//             coef = 1;
//          else
//             coef = coef * (i - j + 1) / j;
//          printf("%4d", coef);
//       }
//       printf("\n");
//    }
//    return 0;
// }




// using namespace std;
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
 





//  #include <stdio.h>

// /* Function definition */
// long long fact(int n);

// int main()
// {
//     int n, k, num, i;
//     long long term;

//     /* Input number of rows */
//     printf("Enter number of rows : ");
//     scanf("%d", &num);

//     for(n=0; n<num; n++)
//     {
//         /* Prints 3 spaces */
//         for(i=n; i<=num; i++)
//             printf("%3c", ' ');

//         /* Generate term for current row */
//         for(k=0; k<=n; k++)
//         {
//             term = fact(n) / (fact(k) * fact(n-k));

//             printf("%6lld", term);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// /**
//  * Function to calculate factorial
//  */
// long long fact(int n)
// {
//     long long factorial = 1ll;
//     while(n>=1)
//     {
//         factorial *= n;
//         n--;
//     }

//     return factorial;
// }