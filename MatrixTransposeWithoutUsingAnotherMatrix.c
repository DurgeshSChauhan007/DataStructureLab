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
/*********/
void TraverseTranspose(int A[20][20], int m, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n\n");
    }
}
void MatrixTranspose(int A[20][20], int m, int n)
{
    int i,j,f;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
       {
           f=A[i][j];
           A[i][j]=A[j][i];
           A[j][i]=f;
       }
    }
    printf("Transpose of a Matrix A :=>\n\n");
    TraverseTranspose(A[0],m,n);
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
    printf("Matrix A :=>\n");
    Traverse(A[0],m,n);
    MatrixTranspose(A[0],m,n);
    return 0;
    }


