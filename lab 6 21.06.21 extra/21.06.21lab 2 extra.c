//C program to insert an array that is already sorted in ascending order.
#include<stdio.h>
void main()
{
 int i,j,n,a[10],num;
 printf("\n Enter the number of elements: ");
 scanf("%d",&n);
 printf("Enter the elements in ascending order:\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter the number you want to insert:");
 scanf("%d",&num);
 for(i=0;i<n;i++)
 {
 if(a[i]>num)
 {
 for(j=n-1;j>=i;j--)
 a[j+1]=a[j];
 a[i]=num;
 break;
 }
 }
 printf("Resultant array:\n");
 for(i=0;i<=n;i++)
 printf("%d\t",a[i]);
}