#include<stdio.h>
int pow(int a, int b)
{
    if (b==0)
        return 1;
    else
        return a*pow(a,b-1);
}
/***********/
int main()
{
    int a,b,power;
    printf("Enter base and exponent: \n");
    scanf("%d%d",&a,&b);
    power=pow(a,b);
    printf("%d",power);
    return 0;
}

