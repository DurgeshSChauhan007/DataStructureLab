#include<stdio.h>
struct Time
{
    int hour;
    int minute;
    int second;
};
int main()
{
    struct Time T1={5,24,46};
    struct Time T2={11,54,58};
    struct Time T3;
    int carry=0,x,y,z;
    printf("%d::%d::%d",T1.hour,T1.minute,T1.second);
    printf("\n\n%d::%d::%d",T2.hour,T2.minute,T2.second);
    x=T1.second+T2.second;
    carry=x/60;
    x=x%60;

   y=T1.minute+T2.minute+carry;
    carry=y/60;
    y=y%60;

    z=T1.hour+T2.hour+carry;

    T3.hour=z;
    T3.minute=y;
    T3.second=x;

    printf("\n\n%d::%d::%d",T3.hour,T3.minute,T3.second);
}
