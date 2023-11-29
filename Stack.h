#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 100
#define True 1
#define False 0
struct Stack
{
    int item[STACKSIZE];
    int Top;
};
/*********************/
void Initialize(struct Stack *S)
{
    S->Top=-1;
}
/*******************/
int IsEmpty(struct Stack *S)
{
    if (S->Top==-1)
        return True;
    else
        return False;
}
/*********************/
void Push(struct Stack *S, int x)
{
    if (S->Top==STACKSIZE-1)
    {
        printf("\n\nStack Overflow");
        exit(1);
    }
    else
    {
        S->Top++;
        S->item[S->Top]=x;
    }
}
/**********************/
int PoP(struct Stack *S)
{
    int x;
    if (IsEmpty(S))
    {
        printf("Stack Underflow");
        exit (1);
    }
    else
        x=S->item[S->Top];
       S->Top--;
       return x;
}
/******************/
int StackTop(struct Stack *S)
{
    int x;
    x=S->item[S->Top];
    printf("%d",x);
}





