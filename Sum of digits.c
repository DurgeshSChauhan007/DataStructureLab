#include<stdio.h>
int Sum(int N)
{
   if(N==0)
    return 0 ;
   else
    return Sum(N/10)+N%10;
}
/***********/
int main()
{
    int N;
    printf("Enter the Number: \n");
    scanf("%d",&N);
   printf("%d",Sum(N));
    return 0;
}
