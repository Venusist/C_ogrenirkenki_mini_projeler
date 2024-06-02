#include<stdio.h>
//* Kullanıcıdan x tane sayı değeri iste kullanıcının girdiği max değeri bul *//
int main()
{
    int total,i=2,numb,max;

printf("Please enter how many total numbers you want to enter.\n");
   scanf("%d",&total);

printf("Please enter a number= ");
    scanf("%d", &max);

while (i<=total) {
printf("Please enter a number=");
scanf("%d",&numb);
if (numb>max) {
    max=numb;
}
i++;
  }

  printf("maximum number is=%d\n",max);

  return 0;
}