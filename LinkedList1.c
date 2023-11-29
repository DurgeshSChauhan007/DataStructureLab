#include<stdio.h>
#include<stdlib.h>
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
void CountEvenOdd(struct Node *Start)
{
    int count_even=0;
    int count_odd=0;
    struct Node *P;
    P=Start;
    while(P!=NULL)
    {
        if (P->info%2==0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
        P=P->Next;
    }
    printf("Number of even number: %d\n",count_even);
    printf("Number of odd number: %d\n",count_odd);
}
/******************/
void MiddleElement()
{
    int c=Count(Start);
    struct Node *P =Start;
    int i,x;
    for(i=1;i<=(c-1)/2;i++)
    {
        P=P->Next;
    }
    x=P->info;
    printf("The Middle Element is: %d\n",x);
}
/*****************/
void MiddleElement1()
{
    struct Node *T = Start;
    struct Node *R = Start->Next;
    while (R!=NULL && R->Next!=NULL)
    {
        T=T->Next;
        R=R->Next;
        R=R->Next;
    }
    int x = T->info;
    printf("The Middle Element is => %d\n",x);
}
/*******************/
void PairwiseSwapping()
{
    struct Node *P = Start;
    struct Node *Q = P->Next;
    int t;
    while (P!=NULL && Q!=NULL)
    {
        t=P->info;
        P->info=Q->info;
        Q->info=t;

        P=Q->Next;
        if (P!=NULL)
        {
            Q=P->Next;
        }
    }
}
/**************/
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
/***************/
int main()
{
    Start=NULL;
    InsBeg(5441);
    InsBeg(20);
    InsBeg(31);
    InsEnd(44);
    InsEnd(569);
    InsBeg(544);
    InsBeg(2);
    InsBeg(341);
    InsEnd(48);
    InsEnd(59);
    Traverse();
    DelBeg();
    DelEnd();
    Traverse();
    DelBeg();
    DelEnd();
    Traverse();
    printf("Total number of elements : %d\n",Count(Start));
    CountEvenOdd(Start);
    MiddleElement();
    MiddleElement1();
    printf("The Reverse Linked List is: \n");
    ReverseLinkedList();
    Traverse();
    printf("The Pairwise Swapping Linked List is: \n");
    PairwiseSwapping();
    Traverse();
    return 0;
}
