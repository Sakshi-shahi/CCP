#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c,d,x1,x2;
  printf("enter the coefficient a,b,c:");
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  d=sqrt(b*b-4*a*c);
  x1=(-b+d)/(2*a);
  x2=(-b-d)/(2*a);
  printf("\n root 1 :%.3f \n root 2:%.3f\n",x1,x2);
  return 0;
}