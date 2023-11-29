#include<stdio.h>
struct Height
{
    int Feet;
    int Inch;
};
int main()
{
    struct Height H1={11,9};
    struct Height H2={10,11};
    struct Height H3={9,9};
    struct Height H4;
    int x,y,carry=0;
    printf("%d:%d ",H1.Feet,H1.Inch);
    printf("\n\n%d:%d ",H2.Feet,H2.Inch);
     printf("\n\n%d:%d ",H3.Feet,H3.Inch);
    y=H1.Inch+H2.Inch+H3.Inch;
    carry=y/12;
    y=y%12;
    x=H1.Feet+H2.Feet+H3.Feet+carry;
    H4.Feet=x;
    H4.Inch=y;
    printf("\n\n Total Height---->%d:%d ",H4.Feet,H4.Inch);

}

