//C program to print even numbers from M to N
#include<stdio.h>
int main()
{
  int i,M,N;
  printf("Enter numbers M and N");
  scanf("%d %d",&M,&N);
  printf("Even numbers from %d to %d are: M,N\n");
  for(i=M;i<=N;i++)
  {
      if(i%2==0)
     {
      printf("%d\n",i);
     }
  }
    return 0;
}

