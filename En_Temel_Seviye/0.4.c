#include <stdio.h>
int main()
{  
   /*Dışarıdan veri almadan Mod alma */

//     int bolunen=10,bolum=3,kalan;
//     kalan=bolunen%bolum;
//     printf("Kalan =%d",kalan);
   
/* Dışarıdan veri alarak mod alma */

int bolunen,bolum,kalan;

printf("Lutfen bolunen sayiyi giriniz.%d\n",bolunen); 
scanf("%d",&bolunen);
printf("Lutfen bolum sayisini giriniz.%d\n",bolum);
scanf("%d",&bolum);

kalan=bolunen%bolum;
printf("Kalan sayi=%d\n",kalan);
}

