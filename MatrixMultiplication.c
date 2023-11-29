#include<stdio.h>
/*********/
void Traverse(int A[20][20], int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n\n");
    }
}
/*******/
void MatrixMultiplication (int A[20][20], int m, int n,int B[20][20],int p, int q)
{
    int i,j,k;
    int C[20][20];
    if(n==p)
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
       {
           C[i][j]=0;
           for(k=0;k<n;k++)
          {
              C[i][j]=C[i][j]+A[i][k]*B[k][j];
          }
       }
    }
    printf("Matrix Multiplication :=>\n\n");
    Traverse(C[0],m,n);
    }
    else
        printf("Matrix Multiplication is not possible between these two matrices");
}
int main()
{
    int A[20][20],B[20][20],i,n,m,j,p,q;
    printf("Enter the number of elements of an arrays A: \n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of an array A:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n\n");
    printf("Enter the number of elements of an arrays B: \n");
    scanf("%d%d",&p,&q);
    printf("Enter the elements of an array B: \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n\n");
    printf("Matrix A :=>\n");
    Traverse(A[0],m,n);
    printf("Matrix B :=>\n");
    Traverse(B[0],p,q);
    MatrixMultiplication(A[0],m,n,B[0],p,q);
    return 0;
    }

