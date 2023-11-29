#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
/************************/
struct node *Getnode()
{
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));
    p->next = NULL;
    return p;
}
/**************/
void InsBeg(struct node ** Start, int x)
{
    struct node *p;
    p = Getnode();
    p->info = x;
    p->next = (*Start);
    (*Start) = p;
}
/******************/
void Traverse (struct node *Start)
{
    struct node *p = Start;
    while (p!=NULL)
    {
        printf("%d----->",p->info);
        p = p->next;
    }
}
/**********************/
int DelBeg(struct node **Start)
{
   struct node *p;
   p = (*Start);
   (*Start) = p->next;
   free(p);
}
/*******************/
int DelAft(struct node **p)
{
    struct node *q, *r;
    q = (*p)->next;
    r = q->next;
    (*p)->next = r;
    free(q);
}
/******************/
struct node *DelOcc (struct node **Start, int x)
{
    struct node *p , *q;
    p = *Start;
    q = NULL;
    while (p!=NULL)
    {
          if (p->info == x)
          {
              p = p->next;
              if (q == NULL)
                  DelBeg(&(*Start));
              else
                    DelAft (&q);
          }
          else
          {
              q = p;
              p = p->next;
          }
    }
}
/**********************/
int main()
{
 struct node *Start = NULL;
 InsBeg(&Start, 10);
 InsBeg(&Start, 10);
 InsBeg(&Start, 40);
 InsBeg(&Start, 50);
 InsBeg(&Start, 10);
 InsBeg(&Start, 30);
 InsBeg(&Start, 10);
 InsBeg(&Start, 10);
 InsBeg(&Start, 50);
 InsBeg(&Start, 10);
 InsBeg(&Start, 10);
 InsBeg(&Start, 20);
 Traverse (Start);
 printf("\n\n\n");
 DelOcc(&Start, 10);
 Traverse(Start);
 return 0;
}
