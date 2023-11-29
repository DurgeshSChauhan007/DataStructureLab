#include<stdio.h>
#include<stdlib.h>
#define True 1
#define False 0
/***************/
struct Node
{
    int info;
    struct Node *Next;
};
struct Node *Start;
struct Node *GetNode()
{
    struct Node *P;
    P=(struct Node*)malloc(sizeof(struct Node));
    return P;
} ;
/*****************/
void FreeNode(struct Node *P)
{
    free(P);
}
/*******************/
void InsBeg(int x)
{
    struct Node *P;
    P=GetNode();
    P->info=x;
    P->Next=Start;
    Start=P;
}
void InsEnd(int x)
{
    struct Node *P;
    struct Node *Q;
    P=Start;
    while(P->Next!=NULL)
    {
        P=P->Next;
    }
    Q=GetNode();
    Q->info=x;
    Q->Next=NULL;
    P->Next=Q;
}
/*******************/
void DelBeg()
{
    struct Node *P;
    int x;
    if (Start==NULL)
    {
        printf("Void Deletion");
    }
    else
    {
        P=Start;
        Start=Start->Next;
        x=P->info;
        FreeNode(P);
    }
    printf("The Deleted Element from the Beginning is:%d\n",x);
}
/*****************/
void DelEnd()
{
    struct Node *P;
    struct Node *Q;
    int x;
    if (Start==NULL)
    {
        printf("Void Deletion");
    }
    else
    {
        P=Start;
        Q=NULL;
        while (P->Next!=NULL)
        {
           Q=P;
           P=P->Next;
        }
        if (Q!=NULL)
        {
            Q->Next=NULL;
        }
        else
        {
            Start=NULL;
        }
        x=P->info;
        FreeNode(P);
    }
    printf("The Deleted Element from the End is:%d\n",x);
}
/*****************/
void Traverse()
{
    struct Node *P;
    P=Start;
    while(P!=NULL)
    {
        printf("%d\n",P->info);
        P=P->Next;
    }
}
/******************/

int Count(struct Node *Start)
{
    int c=0;
    struct Node *P;
    P=Start;
    while (P!=NULL)
    {
        c=c+1;
        P=P->Next;
    }
    return c;
}
/*******************/
void ReverseLinkedList()
{
    struct Node *P = NULL;
    struct Node *C =Start;
    struct Node *N = Start->Next;
    /**************/
    while (C!=NULL)
    {
        C->Next=P;
        P=C;
        C=N;
        if (N!=NULL)
        {
            N=N->Next;
        }
    }
        Start=P;
}
/******************/
int LinearSearch(int x)
{
    struct Node *P = Start;
    while (P!=NULL)
    {
        if (x==P->info)
        {
            return P;
        }
        P=P->Next;
    }
}
/***************/
int CycleDetection()
{
    struct Node *T = Start;
    struct Node *R = Start->Next;
    while (R!=NULL && R->Next!=NULL)
    {
        T=T->Next;
        R=R->Next;
        R=R->Next;
        if (T==R)
        {
            return True;
        }
    }
    return False;
}
/***************/
int CycleLength()
{
    struct Node *T = Start;
    struct Node *R = Start->Next;
    int c=1;
    while (R!=NULL && R->Next!=NULL)
    {
       T=T->Next;
        R=R->Next;
        R=R->Next;
        if (T==R)
        {
            break;
        }
    }
 T=T->Next;
 while (T!=R)
 {
     c++;
     T=T->Next;
 }
 return c;
}
/**************/
int LinkedListSize()
{
    struct Node *T = Start;
    struct Node *R = Start;
    int c=1;
    while(R!=NULL && R->Next!=NULL)
    {
        T=T->Next;
        R=R->Next;
        R=R->Next;
        if (T==R)
      {
         break;
      }
      c=c+1;
    }
      T=Start;
      while(T!=R)
       {
           T=T->Next;
           R=R->Next;
           c=c+1;
       }
     return c;
}
/*************/
int main()
{
    struct Node *P;
    struct Node *Q;
    Start=NULL;
    InsBeg(5441);
    InsBeg(20);
    InsBeg(31);
    InsBeg(544);
    InsBeg(2);
    InsBeg(341);
    InsBeg(436);
    InsBeg(789);

    P->Next=Q;
    if (CycleDetection()==1)
    {
        printf("Cycle is there in Linked List\n");
        printf("The length of cycle is: %d\n",CycleLength());
        printf("The length of Linked List is: %d\n",LinkedListSize());
    }
    else
    {
        printf("Cycle is not there in Linked List\n");
    }
    return 0;
}

