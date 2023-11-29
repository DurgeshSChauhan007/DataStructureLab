#include<stdio.h>
/******************/
int main()
{
    int A[100];
    int x;
    int i;
    printf("Enter the Index :\n");
    scanf("%d",&i);
    x=i-0;
    printf("Address by the ampersand operator:\n");
    printf("%u",&A[i]);
    printf("\n\nAddress by the Index formula: \n");
    printf("%u",A+x);
    return 0;
    }
