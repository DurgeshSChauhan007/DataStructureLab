#include<stdio.h>
/**********/
int Reverse (int N)
{
    int digit = (int) log10(N);
    if(N == 0)
        return 0;
    return ((N%10 * pow(10, digit)) + Reverse(N/10));
}

/***************/
int main()
{
    int N;
    printf("Enter the number:  \n");
    scanf("%d",&N);
    printf("Reverse of a Number :=> %d",Reverse(N));
    return 0;
}
