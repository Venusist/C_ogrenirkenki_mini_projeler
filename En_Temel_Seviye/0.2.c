#include<stdio.h>
int main()
/*Kullanicinin girdiği iki veriyi toplayan çıkaran vs.*/
{
    int sayi1,sayi2;
    int toplam, fark, carpim;
    float bolum;
    printf("Lutfen 1.sayiyi giriniz."); scanf("%d",&sayi1);
    printf("Lutfen 2.sayiyi giriniz."); scanf("%d",&sayi2);

    /* SCANF KISMINDA & ISARETI KOYMAYI UNUTMAAAAAAAA*/

    toplam=sayi1+sayi2;
    fark=sayi1-sayi2;
    carpim=sayi1*sayi2;
    bolum=(float)sayi1/sayi2;

printf("Sayilarin toplami=%d\n",toplam);
printf("Sayilarin farki=%d\n",fark);
printf("Sayilarin carpimi=%d\n",carpim);
printf("Sayilarin bolumu=%.2f\n",bolum);

}