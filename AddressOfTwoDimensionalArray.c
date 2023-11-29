#include<stdio.h>
/******************/
int main()
{
    int A[10];
    int B[5][4];
    int x;
    int i=4, j=3;
    x=(i-0)*(3-0+1)+(j-0);
    printf("Address by the ampersand operator:\n");
    printf("%u\n\n",&B[i][j]);
    printf("Address by the Index formula: \n");
    printf("%u\n\n",B[0]+x);
    return 0;
    }
