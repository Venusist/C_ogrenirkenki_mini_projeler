#include<stdio.h>
/*1. sınıftaki 3 öğrencinin ismini midtermnotunu ve final notunu girmeni ister
sonra 2. sınıftaki 3 öğrencinin aynı şekilde ve ortalamalarını hesaplar*/
int main() {
   int finalscore[2][3],midtermscore[2][3];
   float average[2][3];
   char student[2][3][20];

    for (int i=0;i<2;i++) {
        printf("Enter the student names and exam scores for class %d:\n", i + 1);
        for(int j=0;j<3;j++) {
        printf("Please enter the name of the %dth student in the %d. class = ",j+1,i+1);
        scanf("%s",&student[i][j]);
        printf("Please enter the midterm exam score of %dth student in the %d. class = ",j+1,i+1);
        scanf("%d",&midtermscore[i][j]);
        printf("Please enter the final exam score of %dth student in the %d. class = ",j+1,i+1);
        scanf("%d",&finalscore[i][j]);
    
    average[i][j]=midtermscore[i][j]*0.4+finalscore[i][j]*0.6;
    
        }
   }

        for(int i=0;i<2;i++) {
          printf("\nClass %d average scores:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%s's average score is = %.2f\n", student[i][j], average[i][j]);
        }  
    }

   printf(" \n integer finalscore x = %x \n ", &finalscore[0][0]);
    printf(" \n integer finalscore x = %x \n ", &finalscore[0][1]);
    printf(" \n integer finalscore x = %x \n ", &finalscore[0][2]);
    printf(" \n integer finalscore x = %x \n ", &finalscore[1][0]);
    printf(" \n integer finalscore x = %x \n ", &finalscore[1][1]);
    printf(" \n integer finalscore x = %x \n ", &finalscore[1][2]);
    printf("%lu\n", sizeof(int));
    printf("allocated size of integer in memory %lu\n", sizeof(int));
printf("allocated size of character in memory %lu\n", sizeof(char));
printf("allocated size of double in memory %lu\n", sizeof(double));
return 0;
}