#include<stdio.h>
#include<stdlib.h>
/*************/
struct node
{
    int coef;
    int exp;
    struct node *next;
};
/**************/
struct node * GetNode(void)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->next=NULL;
    return p;
};
/********************/
void InsBeg(struct node **START, int c, int e)
{
    struct node *p;
    p=GetNode();
    p->coef=c;
    p->exp=e;
    p->next=(*START);
    (*START)=p;
}
/***************/
void Traverse (struct node *START)
{
    struct node *p;
    p=START;
    while(p!=NULL)
    {
        printf("\t  %dx^%d",p->coef,p->exp);
        p=p->next;
    }
}
/***********//************/
struct node  *ReverseLinkedList(struct node *Poly3)
{
    struct node *P = NULL;
    struct node *C = Poly3;
    struct node *N = Poly3->next;
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
        Poly3=P;
}
/**************/
 struct node *AddPolynomial(struct node *Poly1, struct node  *Poly2)
{
       struct node *p = Poly1;
       struct node *q = Poly2;
       struct node *Poly3 = NULL;

       while (p!=NULL && q!=NULL)
       {
           if (p->exp==q->exp)
           {
               InsBeg(&Poly3,p->coef+q->coef,p->exp);
               p=p->next;
               q=q->next;
           }
           else
           {
               if (p->exp>q->exp)
               {
                   InsBeg(&Poly3,p->coef,p->exp);
                   p=p->next;
               }
               else
               {
                   InsBeg(&Poly3,q->coef,q->exp);
                   q=q->next;
               }
           }
       }

       while (p!=NULL)
       {
                InsBeg(&Poly3,p->coef,p->exp);
                p=p->next;
       }

      while (q!=NULL)
      {
                   InsBeg(&Poly3,q->coef,q->exp);
                   q=q->next;
      }
      return Poly3;

}
/*************/
int main()
{
    struct node *Poly1=NULL, *Poly2=NULL, *Poly3, *Poly4;
    InsBeg(&Poly1,9,0);
    InsBeg(&Poly1,8,1);
    InsBeg(&Poly1,-2,2);
    InsBeg(&Poly1,4,4);
    InsBeg(&Poly1,3,5);
    Traverse(Poly1);
    printf("\n\n\n");
    InsBeg(&Poly2,4,2);
    InsBeg(&Poly2,5,3);
    InsBeg(&Poly2,3,5);
    InsBeg(&Poly2,1,6);
    InsBeg(&Poly2,-2,7);
    Traverse(Poly2);

    printf("\n\n\n Addition of Polynomial results in : \n");
    Poly3=AddPolynomial(Poly1,Poly2);
    Poly4=ReverseLinkedList(Poly3);
    Traverse(Poly4);
    return 0;
}
