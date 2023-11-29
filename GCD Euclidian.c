#include<stdio.h>
int GCD(int a, int b)
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
/***********/
int main()
{
    int a,b,z;
    scanf("%d%d",&a,&b);
    z=GCD(a,b);
    printf("GCD=>%d",z);
    return 0;
}
