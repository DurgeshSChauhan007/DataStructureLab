#include<stdio.h>
void expunge (int *A,int n,int m)
{
    int i;
    for(i=m-1;i<n-1;i++)
    {
        A[i]=A[i+1];
    }
    // print the new array
    for(i=0;i<n-1;i++)
    {
        printf("%d ",A[i]);
    }
}
int main()
{
    int A[20],i,n,m;
    printf("Enter the number of elements of an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the position of element you want to delete:");
    scanf("%d",&m);
    expunge(A,n,m);
    return 0;
}
