#include<stdio.h>
/* 0
   01
   012
   0123... görseli için */
int main()
{
for(int i=0;i<=9;i++)
{
    printf("%d\n",i);
    for(int j=0;j<=i;j++)
    {
        printf("%d",j);
    }


}


return 0;
}