  #include<stdio.h>
  int func(int);
  int main()
  {
     int num,square;
     printf("\n enter a number :");
     scanf("%d",&num);
     square = func(num);
     printf("\n square of number is :%d",square);
      return (0); }
     int func(int temp){
     return temp*temp;
     }