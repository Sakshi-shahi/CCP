//C program to interchange largest and smallest number in given array
#include<stdio.h>
void main()
{
 int i,n,a[5],max,min,maxpos,minpos,temp;
 printf("\n Enter the number of elements: ");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 max=a[0];
 min=a[0];
 maxpos=0;
 minpos=0;
 for(i=1;i<n;i++)
 {
 if(a[i]>max)
 {
 max=a[i];
 maxpos=i;
 }
 if(a[i]<min)
 {
 min=a[i];
 minpos=i;
 }
 }
 temp=a[maxpos];
 a[maxpos]=a[minpos];
 a[minpos]=temp;
 printf("After interchanging array elements are: ");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}