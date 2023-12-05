#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#define True 1
#define False 0

/******************/
void Initialize(struct node **Top)
{
    *Top = NULL;
}

/******************/
int IsEmpty(struct node **Top)
{
    if (*Top == NULL)
        return True;
    else
        return False;
}

/*********************/
void Push(struct node **Top, int x)
{
    InsBeg(&(*Top), x);
}

/**********************/
int PoP(struct node **Top)
{
    int x;
    if (*Top == NULL)
    {
        printf("Stack Underflow");
        exit(1);
    }
    else
    {
        x = DelBeg(&(*Top));
    }
    return x;
}

/**************************/
int StackTop(struct node **Top)
{
    int x;
    if (*Top == NULL)
    {
        printf("Stack is empty\n");
        exit(1);
    }
    x = (*Top)->info;
    return x;
}

/***********************/
int main()
{
    int x, y, p;
    struct node *Top = NULL;
    Initialize(&Top);
    Push(&Top, 100);
    Push(&Top, 200);
    Push(&Top, 300);
    Push(&Top, 400);
    Push(&Top, 500);
    Push(&Top, 600);
    Push(&Top, 700);
    Push(&Top, 800);
    Traverse(Top);
    printf("\n\n");
    x = IsEmpty(&Top);
    printf("The Popped Element is:%d\n", x);
    y = PoP(&Top);
    printf("The Popped Element is:%d\n", y);
    printf("\n\n");
    Traverse(Top);
    printf("\n\n");
    p = StackTop(&Top);
    printf("The Top Element is:%d", p);
    return 0;
}
