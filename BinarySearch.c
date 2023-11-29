#include<stdio.h>
/***************/
int BinarySearch(int *a,int n, int key)
{
    int mid;
    int low=0;
     int high=n-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
           return mid;
        }
        else
        {
        if (key>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    }
    return -1;
}
int main()
{
    int a[1000],i,n,key;
    printf("Enter the number of element in an array:\n");
    scanf("%d",&n);
    printf("Enter the elements of array which must be sorted:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:\n");
    scanf("%d",&key);
     // searching the element
    int num=BinarySearch(a,n,key);
    if (num!=-1)
        printf("Element in the array at position=> %d",num+1);
    else
    printf("Element not found");
    return 0;
}

