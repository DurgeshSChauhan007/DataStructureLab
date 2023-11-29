#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/****************/
int DoubleHashing(int Table[], int Ts, int x)
{
    int h = x%Ts;
    int flag = 1;
    if (Table[h] == 0)
         Table[h] = x;
    else
    {
           flag = 0;
           int hdash = (2*x - 7)%Ts;
           int i = 1;
           while (flag == 0)
           {
                  int NewPos = (h+i*hdash)%Ts;
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
    int TableDH[15] = {0};

    printf("Enter the number of elements to be stored in the Table:\n");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d",&x);
        DoubleHashing(TableDH,Ts,x);
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
        printf("%d ",TableDH[i]);
        printf("   ");
    }
    return 0;
}
