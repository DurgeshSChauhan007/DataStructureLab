#include<stdio.h>
/********************/
int ToH(int n, char A, char B, char C)
{
    if (n==1)
        printf("\n %c ----> %c",A,C);
        else
    {
        ToH(n-1,A,C,B);
        printf("\n %c ----> %c",'A','C');
        ToH(n-1,B,A,C);
    }
}
int main()
{
    int N;
    printf("Enter the Number of rings : \n");
    scanf("%d",&N);
    ToH(N,'A','B','C');
    return 0;
}
