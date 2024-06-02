#include<stdio.h>
//iki sayı girmeni söyler ve bunların toplam, çarpım, fark, bölüm ve kalan bulur
int main (void)
{
    int firstnumber;
    int secondnumber;
    int sum;
    int product;
    int difference;
    int quotient;
    int remainder;

    printf("Please enter two numbers to the console\n");
    printf("I will print their sum, product, difference, quotient and remainder.\n ");

    scanf("%d%d", &firstnumber, &secondnumber);

sum = firstnumber + secondnumber;
    printf("Sum is %d \n", sum);

product = firstnumber * secondnumber;
    printf("Product is %d \n", product);

difference = firstnumber - secondnumber;
   printf("difference is %d \n", difference);

quotient = firstnumber / secondnumber;
   printf("quitent is %d \n", quotient);

remainder = firstnumber % secondnumber;
   printf("remainder is %d \n", remainder);

    return 0;
}