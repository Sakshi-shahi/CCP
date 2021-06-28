//C program to delete a number at a given location in an array
#include<stdio.h>
void main()
{
 int i,n,pos,a[10];
 printf("\n Enter the number of elements: ");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter the location where you want to delete the element: ");
 scanf("%d",&pos);
 if(pos>=n+1)
 printf("Deletion is not possible\n");
 else
 {
 for(i=pos;i<n;i++)
 a[i]=a[i+1];
 printf("Resultant array:\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 }
}