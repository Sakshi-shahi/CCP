//C program to calculate the sum of squares of first n odd numbers
#include<stdio.h>
int main()
{
 int n,i,sum=0;
 printf("\n Enter the last number: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 sum=sum+(2*i-1)*(2*i-1);
 }
 printf("The sum of squares of first %d odd numbers is %d",n,sum);
 return 0;
}