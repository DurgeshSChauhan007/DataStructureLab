#include<stdio.h>

int main()
{
    int  P[20];
    int i,n;
    printf("Enter the number of elements of an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&P[i]);
    }
    int j;
    int x;
    int DAT[10]={0};
    for(j=0;j<n;j++)
    {
        x=P[j];
        DAT[x]++;
    }
    for(j=0;j<10;j++)
    {
        printf("%d  ",DAT[j]);
    }
    return 0;
}

