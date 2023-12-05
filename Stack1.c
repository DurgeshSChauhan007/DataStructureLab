#include<stdio.h>
#include<stdlib.h>

#define STACKSIZE 10
#define True 1
#define False 0
struct stack
{
    int item[STACKSIZE];
    int Top;
};
struct stack S;
/*********************/
void Initialize()
{
    S.Top=-1;
}
/*******************/
int IsEmpty()
{
    if (S.Top==-1)
        return True;
    else
        return False;
}
/*********************/
void Push(int x)
{
    if (S.Top==STACKSIZE-1)
    {
        printf("\n\nStack Overflow");
        exit(1);
    }
    else
    {
        S.Top++;
        S.item[S.Top]=x;
    }
}
/**********************/
int PoP()
{
    int x;
    if(IsEmpty())
    {
        printf("Stack Underflow");
        exit (1);
    }
    else
        x=S.item[S.Top];
       S.Top--;
       return x;
}
/******************/
int StackTop()
{
    int x;
    x=S.item[S.Top];
    return x;
}
/*********************/
int main()
{
    int x;
    Initialize();
    Push(100);
    Push(200);
    Push(300);
    Push(400);
    Push(500);
    Push(600);
    Push(700);
    Push(800);
    x=PoP();
    printf("The Popped Element is:%d",x);
    return 0;
}
