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
void MatrixSubtraction (int A[20][20], int m, int n,int B[20][20])
{
    int i,j;
    int C[20][20];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
       {
           C[i][j]=A[i][j]-B[i][j];
       }
    }
    printf("Matrix Subtraction:=>\n\n");
    Traverse(C[0],m,n);
}
int main()
{
    int A[20][20],B[20][20],i,n,m,j;
    printf("Enter the number of elements of an arrays: \n");
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
    printf("Enter the elements of an array B: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n\n");
    printf("Matrix A :=>\n");
    Traverse(A[0],m,n);
    printf("Matrix B :=>\n");
    Traverse(B[0],m,n);
    MatrixSubtraction(A[0],m,n,B[0]);
    return 0;
    }

