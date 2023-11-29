#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*************/
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
int MidSquareHash (long long N, int Ts)
{
    int d = DigitsCount(Ts-1);
    int l = DigitsCount(N);
    int e = (2*l - d)/2;
    int r = pow(10,e);
    N=(N*N)/r;
    int mod = pow(10,d);
    return N%mod;
}
/*******************/
int main()
{
    int p = MidSquareHash(1234,100);
    printf("The Key Stored at %d position in the Table \n\n\n",p);
    int q = MidSquareHash(4565,100);
    printf("The Key Stored at %d position in the Table \n\n\n",q);
    return 0;
}

