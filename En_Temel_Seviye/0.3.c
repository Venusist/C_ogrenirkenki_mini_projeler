#include<stdio.h>
//10 adet not girilmesini ister ve ortalamasını hesaplar. 
int main()
 {
     int counter;
     int grade;
     int total;
     int avarage;


     total = 0;
     counter = 1;


     while ( counter <= 10 ) {
     printf("Enter grade: ");
     scanf( "%d", &grade );
     total = total + grade;
     counter = counter + 1;
     }


     avarage = total / 10;

     printf( "Class avarage is %d\n", avarage);
     return 0;
     
 }
