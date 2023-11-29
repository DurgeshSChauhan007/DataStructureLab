#include<stdio.h>
#include<stdlib.h>
#include"Stack.h"
int main()
{
    struct Stack S;
    int N,x;
   printf("Enter the Number:\n");
   scanf("%d",&N);
   Initialize(&S);
   while(N!=0)
   {
       x=N%2;
       Push(&S,x);
       N=N/2;
   }
   while(!IsEmpty(&S))
   {
       x=PoP(&S);
       printf("%d",x);
   }
   return 0;
}
