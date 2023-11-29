#include<stdio.h>
/*********************/
void Traverse(int *A, int N)
{
    int i;
    for (i=0;i<N;i++)
    {
        printf("%d  ",A[i]);
    }
    printf("\n");
}
/***********************/
void MergeSort(int *A, int N, int *B, int M)
{
    int C[13];
    int i=0;
    int j=0;
    int k=0;
    while(i<N && j<M)
   {
    if(A[i]<B[j])
    C[k++]=A[i++];
    else
    C[k++]=B[j++];
   }
   while(i<N)
   {
    C[k++]=A[i++];
   }
   while(j<M)
   {
       C[k++]=B[j++];
   }
   /*************/
   printf("\n\nMerge Sort :=>  ");
   for(k=0;k<13;k++)
   {
       printf("%d  ",C[k]);
   }
}
/**************************/
int main()
{
    int A[]={2,4,6,8,10,12};
    int B[]={1,3,4,5,6,7,8};
    int N=6;
    int M=7;
    Traverse(A,N);
    Traverse(B,M);
    MergeSort (A,N,B,M);
    return 0;
}


