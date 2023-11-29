#include<stdio.h>
#include<stdlib.h>
#define SIZE 8
#define TRUE 1
#define FALSE 0
/****************/
struct Queue
{
    char item[SIZE];
    int REAR;
    int FRONT;
};
struct Queue Q;
/***************/
void initialize()
{
    Q.REAR=-1;
    Q.FRONT=0;
}
/*****************/
int IsEmpty()
{
    if (Q.REAR-Q.FRONT+1==0)
        return TRUE;
    else
        return FALSE;
}
void EnQueue(x)
{
    if (Q.REAR==SIZE-1)
    {
        printf("Queue Overflows");
        exit(1);
    }
    else
    {
        Q.REAR=Q.REAR+1;
        Q.item[Q.REAR]=x;
    }
}
 char DeQueue()
 {
     char x;
     if (IsEmpty())
     {
         printf("Queue Underflows");
         exit (1);
     }
     else
     {
         x=Q.item[Q.FRONT];
         Q.FRONT=Q.FRONT+1;
         return x;
     }
 }
 /*********************/
 int main()
 {
     char x;
     initialize();
     EnQueue('A');
     EnQueue('B');
     EnQueue('C');
     x=DeQueue();
     printf("\nDeleted item is:=> %c",x);
      x=DeQueue();
     printf("\nDeleted item is:=> %c",x);
      x=DeQueue();
     printf("\nDeleted item is:=> %c",x);
      x=DeQueue();
     printf("\nDeleted item is:=> %c",x);
     return 0;
}
