#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/****************/
int LinearProbing(int Table[], int Ts, int x)
{
    int m = x%Ts;
    int flag = 1;
    if (Table[m] == 0)
         Table[m] = x;
    else
    {
           flag = 0;
           for (int i = 1; i < Ts ; i++)
           {
               int NewPos = (m+i)%Ts;
               if (Table[NewPos] == 0)
               {
                   Table[NewPos] = x;
                   flag = 1;
                   break;
               }
           }
    }
    return flag;
}
/***********************/
int main()
{
    int key, Ts = 20;
    int n,x;
    int TableLP[20] = {0};

    printf("Enter the number of elements to be stored in the Table:\n");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d",&x);
        LinearProbing(TableLP,Ts,x);
    }

     for(int i = 0; i <= Ts-1 ; i++)
    {
        printf("%d",i);
        printf("    ");
    }
    printf("\n\n");
     for(int i = 0; i <= Ts-1 ; i++)
    {
        printf("------");
    }
    printf("\n\n");
    /************/
     for(int i = 0; i <= Ts-1 ; i++)
    {
        printf("%d ",TableLP[i]);
        printf("   ");
    }
    return 0;
}

