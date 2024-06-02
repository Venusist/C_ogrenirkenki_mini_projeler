#include<stdio.h>
/*verdiğim sayıları küçütken büyüğe sıralar*/
int main() {

    int dizi[]={45,78,14,5,9,99},i,j,gecicibellek;

    for(i=0;i<6;i++) {
        for(j=0;j<6-i;j++)
        /*6-i dedim çünkü eğer demezsem verileri daha
        yavaş işler çünkü her seferinde en baştan başlıyor onu önledik
        .*/ {
            if(dizi[j]>dizi[j+1]) {
                gecicibellek=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecicibellek;   
            } } }
  for(i=0;i<6;i++) {          
   printf("%d ",dizi[i]);
}
}