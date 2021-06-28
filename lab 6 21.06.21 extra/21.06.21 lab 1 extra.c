//C program to insert a number at a given location in an array
#include<stdio.h>
void main()
{
 int i,n,a[10],pos,val;
 printf("\n Enter number of elements: ");
 scanf("%d",&n);
 printf("Enter the elements:\n",n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter the location at which to insert an element: ");
 scanf("%d",&pos);
 printf("Enter the value to insert: ");
 scanf("%d",&val);
 for(i=n;i>=pos;i--)
 {
 a[i+1]=a[i];
 }
 a[pos]=val;
 printf("Resultant array:\n");
 for(i=0;i<=n;i++)
 printf("%d\t",a[i]);
}