#include<stdio.h>
int fact(int N)
{
    if (N==0)
        return 1;
    else
        return N*fact(N-1);
}
/***********/
int main()
{
    int N,Factorial;
    scanf("%d",&N);
    Factorial=fact(N);
    printf("%d",Factorial);
    return 0;
}
