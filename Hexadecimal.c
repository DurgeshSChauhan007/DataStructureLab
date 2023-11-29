#include<stdio.h>
#include<stdlib.h>
#include"Stack.h"
int main()
{
    struct Stack S;
    char DAT[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int N,x;
   printf("Enter the Number:\n");
   scanf("%d",&N);
   Initialize(&S);
   while(N!=0)
   {
       Push(&S,N%16);
       N=N/16;
   }
   while(!IsEmpty(&S))
   {
       x=PoP(&S);
       printf("%c",DAT[x]);
   }
   return 0;
}
