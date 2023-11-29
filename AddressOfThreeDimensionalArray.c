#include<stdio.h>
int main()
{
    int A[10];
    int B[5][4];
    int C[5][4][4];
    int x;
    int i=4, j=3, k=3;
    x=(i-0)*(3-0+1)*(3-0+1)+(j-0)*(3-0+1)+(k-0);
    printf("Address by the ampersand operator:\n");
    printf("%u\n\n",&C[i][j][k]);
    printf("\n\nAddress by the Index formula: \n");
    printf("%u\n\n",C[0][0]+x);
    return 0;
    }

