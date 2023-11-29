#include<stdio.h>
/******************/
int LinearSearch(int *A, int n, int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(key==A[i])
        {
            return i;
        }
    }
         return -1;
}
/************/
int main()
{
    int A[100],i,j,n,key;
    printf("Enter the elements of an Array:\n");
    scanf("%d",&n);
    printf("Enter the elements of an Array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the element to be searched:\n");
    scanf("%d",&key);
    int num=LinearSearch(A,n,key);
    if(num!=-1)
    printf("Element found at position=> %d",num+1);
    else
        printf("Element not found in this array");
    return 0;
}
