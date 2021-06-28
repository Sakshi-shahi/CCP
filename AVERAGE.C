#include<stdio.h>
float calculate(float a,float b,float c)
{
   float avg=0,sum=0;
   sum=a+b+c;
   avg=sum/3;
   return avg;
}
int main()
{
    float a,b,c,x;
    printf("enter the values of three numbers\n");
    printf("for which average to be calculated\n");
    scanf("%f %f %f ",&a,&b,&c);
    x=calculate (a,b,c);
    printf("average to three numbers %0.2f,%0.2f,%0.2fis%0.2f:",a,b,c,x);

   return(0);
}