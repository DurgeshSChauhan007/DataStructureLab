#include<stdio.h>
struct Complex
{
    int Rept;
    int Impt;
};
int main()
{
    struct Complex C1={3,4};
    struct Complex C2={7,4};
    struct Complex C3;
    int x,y,p,q,a,b;
    printf("%d+%d i",C1.Rept,C1.Impt);
    printf("\n\n%d+%d i",C2.Rept,C2.Impt);
    x=C1.Rept+C2.Rept;
    y=C1.Impt+C2.Impt;
    C3.Rept=x;
    C3.Impt=y;
    printf("\n\n Addition:%d+%d i",C3.Rept,C3.Impt);
     p=C1.Rept-C2.Rept;
    q=C1.Impt-C2.Impt;
    C3.Rept=p;
    C3.Impt=q;
    printf("\n\n Subtraction:%d+%d i",C3.Rept,C3.Impt);
     a=(C1.Rept*C2.Rept)-(C1.Impt*C2.Impt);
    b=(C1.Impt*C2.Rept)+(C1.Rept*C2.Impt);
    C3.Rept=a;
    C3.Impt=b;
    printf("\n\nMultiplication:%d+%d i",C3.Rept,C3.Impt);
}
