#include <stdio.h>
/*Hazır atanmış sayıların toplamı çarpımı.vs*/
int main()
 {
   int sayi1=5,sayi2=7;
   int toplam,carpim,fark;
toplam= sayi1+sayi2;
fark= sayi1-sayi2;
carpim= sayi1*sayi2;
float bolum=(float)sayi1/(float)sayi2;
/*Aynı zamanda sadece bir sayı için float kullansan da yeter.*/
/*Bölümde tam sayı çıkmayacağı için float kullanıyorum*/
/*sayi1 ve sayi2 yi floata çevirmemin sebebi veri tipini değiştirmemiz??*/
printf("Toplam=%d\n",toplam);
printf("Fark=%d\n",fark);
printf("Carpim=%d\n",carpim);
printf("Bolum=%.2f\n",bolum);
/*%f den önceki sayı noktadan sonra kaç basamak gösterilmesini istediğine göre yaz*/

 }
