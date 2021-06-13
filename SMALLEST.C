//illustrate conditinal branching statement to find the smallest of three numbers.
#include<stdio.h>
int smallest(int,int,int);
int main()
{
  int n1,n2,n3;
  printf("enter the number:\n");
  scanf("%d %d %d",&n1,&n2,&n3);
  smallest(n1,n2,n3);
  return 0;
}
int smallest(int n1,int n2,int n3)
{
 if(n1<n2&&n1<n3)
 printf("%d is smallest",n1);
 else if(n2,n1&&n2<n3)
 printf("%d is smallest",n2);
 else
 printf("%d is smallest",n3);
 return 0;
}





