#include<stdio.h>
void insert(int *A,int n,int m, int ele)
{
    int i;
    for(i=n-1;i>=m-1;i--)
    {
        A[i+1]=A[i];
    }
    A[m-1]=ele;
    for(i=0;i<=n;i++)
    {
        printf("%d ",A[i]);
    }
}
int main()
{
    int A[20],i,n,m,ele;
    printf("Enter the number of elements of an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the position where you want insert new element:");
    scanf("%d",&m);
    printf("Enter the new element:");
    scanf("%d",&ele);
    insert(A,n,m,ele);
    return 0;
}
