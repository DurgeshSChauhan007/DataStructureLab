#include<stdio.h>
void reverse(int *A, int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",A[i]);
    }
}
int main()
{
    int P[20];
    int i,n;
    printf("Enter the number of elements of an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&P[i]);
    }
    reverse (P,n);
    return 0;
}
