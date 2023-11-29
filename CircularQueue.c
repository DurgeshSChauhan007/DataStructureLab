#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0
/****************/
struct CQueue
{
    char item[SIZE];
    int REAR;
    int FRONT;
};
struct CQueue CQ;
/***************/
void initialize()
{
    CQ.REAR=SIZE-1;
    CQ.FRONT=SIZE-1;
}
/*****************/
int IsEmpty()
{
    if (CQ.REAR==CQ.FRONT)
        return TRUE;
    else
        return FALSE;
}
void EnCQueue(x)
{
    if ((CQ.REAR+1)%SIZE==CQ.FRONT)
    {
        printf("\nQueue Overflows");
        exit(1);
    }
    else
    {
        CQ.REAR=(CQ.REAR+1)%SIZE;
        CQ.item[CQ.REAR]=x;
    }
}
 int DeCQueue()
 {
     int  x;
     if (IsEmpty())
     {
         printf("\nQueue Underflows");
         exit (1);
     }
     else
     {
        CQ.FRONT=(CQ.FRONT+1)%SIZE;
         x=CQ.item[CQ.FRONT];
         return x;
     }
 }
 /*********************/
 int main()
 {
     int x;
     initialize();
     EnCQueue(20);
     EnCQueue(10);
     EnCQueue(15);
     EnCQueue(10);
     EnCQueue(40);
     EnCQueue(60);
     EnCQueue(70);
     x=DeCQueue();
     printf("\nDeleted item is:=> %d",x);
      x=DeCQueue();
     printf("\nDeleted item is:=> %d",x);
     x=DeCQueue();
     printf("\nDeleted item is:=> %d",x);
      x=DeCQueue();
     printf("\nDeleted item is:=> %d",x);
     x=DeCQueue();
     printf("\nDeleted item is:=> %d",x);
      x=DeCQueue();
     printf("\nDeleted item is:=> %d",x);
     return 0;
}

