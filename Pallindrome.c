#include<stdio.h>
#include<math.h>
/**************/
int Palindrome(int N)
{
   int digit = (int) log10(N);
    if(N == 0)
        return 0;
    return ((N%10 * pow(10, digit)) + Palindrome(N/10));
}
/*************/
int main()
{
    int  N,y;
    printf("Enter the Number: \n");
    scanf("%d",&N);
    y = Palindrome(N);
    if (y == N)
        printf("The Given Number is Palindrome ");
    else
        printf("The Given Number is not Palindrome");
    return 0;
}
