#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/****************/
int QuadraticProbing(int Table[], int Ts, int x)
{
    int m = x%Ts;
    int flag = 1;
    if (Table[m] == 0)
         Table[m] = x;
    else
    {
           flag = 0;
           int i = 1;
           while (flag == 0)
           {
                  int NewPos = (m+i*i)%Ts;
                  i++;
                  if (Table[NewPos] == 0)
                  {
                        Table[NewPos] = x;
                        flag = 1;
                  }
           }
    }
    return flag;
}
/***********************/
int main()
{
    int key, Ts = 15;
    int n,x;
    int TableQP[15] = {0};

    printf("Enter the number of elements to be stored in the Table:\n");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d",&x);
        QuadraticProbing(TableQP,Ts,x);
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
        printf("%d ",TableQP[i]);
        printf("   ");
    }
    return 0;
}
