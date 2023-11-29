#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a[10],i;
 printf("Enter the elements of array:\n");
 for(i=0;i<10;i++)
 {
     scanf("%d",a+i);
 }
 printf("The elements are:");
 for(i=0;i<10;i++)
 {
     printf("%d\n",*(a+i));
 }
 return 0;
}
