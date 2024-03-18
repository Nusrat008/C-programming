#include<stdio.h>
 #include<conio.h>
                        int main()
                            {
                                  //clrscr();
                                  int count,i,age,person=0;
                                 count=0;printf("Input age of 100 persons:");
                                 for(i=1;i<=100;i++)
                                             {
                                                  scanf("%d",&age);
                                                  if(age>=50&&age<=60)
                                                  count+=1;
                                                  person++;
                                                  continue;
                                            }
                                printf("\n total num of person = %d\nthe countable number is:%d",person,count);
                                return 0;
                                //getch();  
                         }


