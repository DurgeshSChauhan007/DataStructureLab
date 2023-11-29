#include<stdio.h>
/*********/
void Traverse(float A[20][20], int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%0.2f\t",A[i][j]);
        }
        printf("\n\n");
    }
}
/*********/
void Determinant (float A[20][20], int m, int n)
{
    int i,j,k;
    float det=1,ratio;
    if(m==n)
    {
       /* Applying Gauss Elimination */
	 for(i=0;i< n;i++)
	 {
		  if(A[i][i] == 0.0)
		  {
			   printf("Mathematical Error!");
			   exit(0);
		  }
		  for(j=i+1;j< n;j++)
		  {
			   ratio = A[j][i]/A[i][i];

			   for(k=0;k< n;k++)
			   {
			  		A[j][k] = A[j][k] - ratio*A[i][k];
			   }
		  }
	 }
    for(i=0;i<n;i++)
    {
        det=det*A[i][i];
    }
    printf("Determinant of a Matrix A :=> %0.3f",det);
    }
    else
        printf("Determinant cannot be evaluated ");
}
int main()
{
    float A[20][20];
    int i,n,m,j;
    printf("Enter the number of elements of an arrays: \n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of an array A:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%f",&A[i][j]);
        }
    }
    printf("\n\n");
    printf("Matrix A :=>\n");
    Traverse(A[0],m,n);
    Determinant(A[0],m,n);
    return 0;
    }



