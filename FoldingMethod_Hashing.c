#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/******************/
int DigitsCount (int N)
{
    int c = 0;
    while (N!=0)
    {
        c++;
        N=N/10;
    }
    return c;
}
/****************/
int FoldingHash (long long N, int Ts)
{
    int d = DigitsCount(Ts-1);
    int mod = pow (10,d);
    int sum = 0;
    while (N!=0)
    {
        sum = sum + N%mod;
        N=N/mod;
    }
    return sum%Ts;
}
/****************/
int main()
{
    int p = FoldingHash(1287458934,100);
    printf("The Key Stored at %d position in the Table \n\n\n",p);
    int q = FoldingHash(23741203735,100);
    printf("The Key Stored at %d position in the Table \n\n\n",q);
    return 0;
}

