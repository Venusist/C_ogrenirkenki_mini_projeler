#include<stdio.h>
/* 4 basamaklı sayı girilmesini istiyorum ve bunu belirli bi düzende şifreliyor orijinal halini ve şifrelenmiş halini gösteriyor*/
/*encrypt ve decrypt fonksiyonları void olarak belirtilmiştir çünkü bu fonksiyonlar sadece belirli bir işlem gerçekleştirir ve bir değer döndürmez.*/
void encrypt(int number) {
int integer[4];

integer[0]=(number/1000+7)%10;
integer[1]=(number/100%10+7)%10;
integer[2]=(number/10%10+7)%10;
integer[3]=(number%10+7)%10;

/*sayının orijinal değerini kaybetmemek için swap yapıyoruz*/
int swap=integer[0];// temp = digits[0]'ın (orijinal değeri)
integer[0]=integer[2];// digits[0] artık digits[2]'nin değeri
integer[2]=swap;// digits[2] artık temp'in değeri (orijinal digits[0])

swap=integer[1];
integer[1]=integer[3];
integer[3]=swap;

printf("encrypted number is: %d%d%d%d\n",integer[0],integer[1],integer[2],integer[3]);
}

void decrypt(int number) {
    int integer[4];

integer[0]=number/1000;
integer[1]=number/100%10;
integer[2]=number/10%10;
integer[3]=number%10;

int swap=integer[0];
integer[0]=integer[2];
integer[2]=swap;

swap=integer[1];
integer[1]=integer[3];
integer[3]=swap;

/*şifrelemeyi terse çeviriyoruz*/
for(int i=0;i<4;i++){
    integer[i]=(integer[i]+10-7)%10;
}
printf("Original number is: %d%d%d%d\n",integer[0],integer[1],integer[2],integer[3]);
}

int main() {
int number;
printf("Please enter a four-digit integer= ");
scanf("%d",&number);

  encrypt(number);
printf("Enter an encrypted four-digit number:");
scanf("%d",&number);
  decrypt(number);

 return 0;
}