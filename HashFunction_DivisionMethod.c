#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*************/
int NearestPrime(int Ts)
{
    int i = 0,j = 0;
    int flag = 0;
    for(i = Ts; i >= 2; i--)
    {
        for (j = 2; j <= sqrt(i); j++)
        {
            if ( i%j == 0)
                 break;
        }
        if (j > sqrt(i))
              return i;
    }
    if (flag == 1)
        return 0;
    else
        return 1;
}
/****************/
int DivisionHash (int Key, int Ts)
{
   int Np = 0;
   int pos = 0;
   Np = NearestPrime(Ts);
   pos = Key%Np;
   return pos;
}
/****************/
int main()
{
    int p = DivisionHash(1234,100);
    printf("The Key Stored at %d position in the Table \n\n\n",p);
    int q = DivisionHash(2335,100);
    printf("The Key Stored at %d position in the Table \n\n\n",q);
    return 0;
}
