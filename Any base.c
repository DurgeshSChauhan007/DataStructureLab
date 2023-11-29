#include<stdio.h>
#include<stdlib.h>
#include"Stack.h"
int main()
{
    struct Stack S;
    char DAT[36]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int N,x,a;
   printf("Enter the Number:\n");
   scanf("%d",&N);
   printf("Any base : \n");
   scanf("%d",&a);
   Initialize(&S);
   while(N!=0)
   {
       Push(&S,N%a);
       N=N/a;
   }
   while(!IsEmpty(&S))
   {
       x=PoP(&S);
       printf("%c",DAT[x]);
   }
   return 0;
}

