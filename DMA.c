#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *a,i,n;
 printf("Enter the number of elements:\n");
 scanf("%d",&n);
 a=(int*)malloc(n*sizeof(int));
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
 {
     scanf("%d",a+i);
 }
 printf("The elements are:\n");
 for(i=0;i<n;i++)
 {
     printf("%d\n",*(a+i));
 }
 return 0;
}
