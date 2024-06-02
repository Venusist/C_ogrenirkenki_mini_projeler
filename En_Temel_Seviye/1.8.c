#include <stdio.h>
/*bi fonksiyon ürettim*/
int addition(int x,int y){
  return x+y;
}
int main() {

int num1,num2,total;
    printf("enter 1st number\n");
    scanf(" %d", &num1);
    printf("enter 2nd number\n");
    scanf(" %d", &num2);

total = addition(num1,num2);

printf(" \n total=%d", total);
}