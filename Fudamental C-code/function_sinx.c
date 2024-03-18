//code = 2:
 #include<stdio.h>
 //#include<conio.h>
 #include<math.h>
  double fact(double power)
     {
     double f=1;
    int k;
    for(k=1;k<=power;k++)
    f=f*k;
    return f;
    }
    void main()
    {
       int i=1,count=0;
     double x,term,deno,lob,sin,power=3;
     //clrscr();
     scanf("%lf",&x);
      term=x;
         sin=x;
      while(term>=0.0001)
      {
        lob=pow(x,power);
     deno=fact(power);
     term=lob/deno;
   power+=2;
    if(i%2==1)
    sin=sin-term;
     else
    sin=sin+term;
    i++;
    count++;
      }
      printf("the result= %lf count=%d",sin,count);
     //getch();
 }
