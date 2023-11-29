#include<stdio.h>
int DAT[10000]={0};
int fib(int N)
{
    if (N==1 || N==2)
    {
        return N-1;
    }
    else
        {
            if (DAT[N]==0)
            {
                DAT[N]=fib(N-1)+fib(N-2);
                return DAT[N];
            }
        }
}
/***********/
int main()
{
    int N,i,z;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        z=fib(i);
        printf("%d  ",z);
    }
    return 0;
}

