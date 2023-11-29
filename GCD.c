#include<stdio.h>
/**************/
int GCD (int a, int b)
{
    if (a==0)
        return b;
    else if (b==0)
        return a;
    else
    {
        if (a>b)
            return GCD(a%b,b);
        else
            return GCD(a,b%a);
    }
}
/******************/
int main()
{
    int a,b,f;
    printf("Enter the Numbers:\n");
    scanf("%d%d",&a,&b);
    f=GCD(a,b);
    printf("The Greatest Common divisor of %d and %d is :  %d",a,b,f);
    return 0;
}
