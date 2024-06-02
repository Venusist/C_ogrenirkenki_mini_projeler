#include <stdio.h>
    /*FABRİKA MAAŞ SKALASI*/
int main() {
    int matris[8][2];

    for(int i=0;i<2;i++) {
        for(int j=0;j<8;j++) {
            printf("Please enter the salary of the %d. employee in the %d. factory= \n",j+1,i+1);
            /*+1 OLARAK EKLEDİM ÇÜNKÜ MATRİSLER 0 DAN BAŞLAR DİĞER TÜRLÜ HATA VERİR*/
            scanf("%d",&matris[j][i]);
        }
    }
            
          printf("\n \t 1. Factory \t 2. Factory\n");
    for(int j = 0; j < 8; j++) {
        printf("%d. worker \t %d$ \t %d$\n", j+1, matris[j][0], matris[j][1]);
    }

    return 0;
}