#include<stdio.h>
#include<conio.h>
#include<math.h>
                void main()
                {
                                 double term,deno,lob,sum;
                                //clrscr();
                                  term=1.0;
                                sum=1.0; lob=1.0;deno=2.0;
                                while(term>=0.0001)
                                 {
                                                                term=lob/deno;
                                                                 term=pow(term,deno);
                                                                 sum+=term;
                                                                  deno++;
                                                                printf("%lf\n",sum);
                                 }
                                printf("the sum= %lf",sum);
                                getch();
                   }