#include <stdio.h>
/*Dizilerde arama*/
int main() {

  int sayilar[] = {44,25,31,95,4,36,12,5,74,14};
  int sayi,i,bulundu=0;

  printf("sayi griniz ="); scanf("%d",&sayi);

  for(i=0;i<10;i++) {
    if(sayilar[i]==sayi) {
        bulundu=1; break; }
  }
    if(bulundu==1) {
        printf("girilen %d sayisi %d. siradadir",sayi,i);
    }
    else {
        printf("sayi bulunamadi.");
    }
  }

