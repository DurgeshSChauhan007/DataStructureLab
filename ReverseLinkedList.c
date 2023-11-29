#include<stdio.h>
#include<stdlib.h>
#include"LinkedList.h"
/************/
struct node  *ReverseLinkedList(struct node *list)
{
    struct node *P = NULL;
    struct node *C =list;
    struct node *N = list->next;
    /**************/
    while (C!=NULL)
    {
        C->next=P;
        P=C;
        C=N;
        if (N!=NULL)
        {
            N=N->next;
        }
    }
        list=P;
}
/**************/
int main()
{
    struct node *Poly1=NULL, *Poly2=NULL, *Poly3, *Poly4;
    InsBeg(&Poly1,4);
    InsBeg(&Poly1,3);
    InsBeg(&Poly1,2);
    InsBeg(&Poly1,1);
    InsEnd(&Poly1,9);
    InsBeg(&Poly2,5);
    InsBeg(&Poly2,3);
    InsBeg(&Poly2,9);
    Poly3=ReverseLinkedList(Poly1);
    Traverse(Poly3);
    printf("\n\n\n");
    Poly4=ReverseLinkedList(Poly2);
    Traverse(Poly4);
    return 0;
}
