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
/***********/
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
struct node *MultiplyPolynomial(struct node *Poly1, struct node *Poly2)
{
    struct node *p = Poly1;
    struct node *q ;
    struct node *Poly3=NULL;
    int N = (Poly1->exp)+(Poly2->exp);
    int *DAT,i,E,C;
    DAT = (int *)calloc(N+1 , sizeof(int));
    while (p!=NULL)
    {
        q = Poly2;
        while (q!=NULL)
        {
            E = p->exp + q->exp;
            C = (p->coef)*(q->coef);
            DAT[E] = DAT[E] + C ;
            q = q->next;
        }
        p=p->next;
    }
    for (int i=0; i<=N; i++)
    {
        if (DAT[i]!=0)
        {
            InsBeg(&Poly3,DAT[i],i);
        }
    }
    return Poly3;
}
int main()
{
    struct node *Poly1=NULL, *Poly2=NULL, *Poly3;
    InsBeg(&Poly1,-9,0);
    InsBeg(&Poly1,1,1);
    InsBeg(&Poly1,-2,3);
    InsBeg(&Poly1,3,4);
    InsBeg(&Poly1,-5,6);
    InsBeg(&Poly1,4,7);
    InsBeg(&Poly1,7,8);
    Traverse(Poly1);
    printf("\n\n\n");
    InsBeg(&Poly2,1,1);
    InsBeg(&Poly2,5,2);
    InsBeg(&Poly2,-2,3);
    InsBeg(&Poly2,2,5);
    InsBeg(&Poly2,-5,6);
    InsBeg(&Poly2,2,7);
    Traverse(Poly2);
    printf("\n\n\n Addition of Polynomial results in : \n");
    Poly3=AddPolynomial(Poly1,Poly2);
    Traverse(Poly3);
    printf("\n\n\n Multiplication of Polynomial results in :");
    Poly3=MultiplyPolynomial(Poly1,Poly2);
    Traverse(Poly3);
    return 0;
}
