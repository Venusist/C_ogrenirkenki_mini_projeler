#include <stdio.h>
/*10 a kadar Kac adet tek kac adet cift sayi oldugunu hesaplama.*/
int main()
{
      int i,ciftsayi=0,teksayi=0;
      for(i=0;i<=10;i++)
      {
        if(i%2==0)
        {
            ciftsayi=ciftsayi+1;
          
        }
       else{ 
        teksayi=teksayi+1;
       }
      }

        printf("%d adet cift sayi vardir.\n",ciftsayi);
        printf("%d adet tek sayi vardir.\n",teksayi);
}
