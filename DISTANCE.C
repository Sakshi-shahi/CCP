#include<stdio.h>
#include<math.h>
int main()
{
   int x1,x2,y1,y2;
   float distance=0.0;
   printf("enter the x and y coordinates of the first point and the second point");
   scanf("%d %d %d %d ",&x1,&x2,&y1,&y2);
   distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
   printf("\n distance=%f",distance);
   return(0);
}