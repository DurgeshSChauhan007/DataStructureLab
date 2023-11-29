#include<stdio.h>
struct student
{
   char name[20];
   int M1,M2,M3,M4,M5,M6;
};
typedef struct student std;
int main()
{
  std s[5];
  int i;
  for( i=0;i<5;i++)
  {
      printf("enter the  marks of student %d",i+1);
      scanf("%s",s[i].name);
      scanf("%d%d%d%d%d%d",&s[i].M1,&s[i].M2,&s[i].M3,&s[i].M4,&s[i].M5,&s[i].M6);
  }
  for(i=0;i<5;i++)
  {
      printf("%s\t",s[i].name);
      printf("%d\t%d\t%d\t%d\t%d\t%d\t",s[i].M1,s[i].M2,s[i].M3,s[i].M4,s[i].M5,s[i].M6);
  }
 return 0;
}


