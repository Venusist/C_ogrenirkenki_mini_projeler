#include<stdio.h>

int main() {
    double worldpop,annualrise, estimatedpop; 
    float birthrate, deathrate, growthrate;
    int infoyear;
do {
    printf("Please enter the current world population (billion):\n");
    scanf("%lf", &worldpop);

    if( worldpop <= 0) {
       printf("Invalid input! Enter a positive number.\n");
    }}
    while (worldpop<=0);

do {
    printf("Please enter the birth rate of the world population (precentage):\n");
    scanf("%f", &birthrate);
    if(birthrate<0) {
        printf("Invalid input! Enter a positive number.");
        return 0;
    }
} while (birthrate < 0);
do {
    printf("Please enter the death rate of the world population (percentage) = \n");
    scanf("%f", &deathrate);

    if(deathrate<0) {
        printf("Invalid input! Enter a positive number.");
        return 0;
    }
 } while (deathrate < 0);
growthrate= birthrate-deathrate;
printf("growthrate is %%%.2f \n",growthrate);
//metin kısmında % belirtmen gerekirse bu şekilde yap %%

growthrate /= 100;
annualrise=worldpop*growthrate;

printf("Please enter how many years of information you would like to receive.\n");
scanf("%d",&infoyear);

    for(int i=0;i<=infoyear;i++){
        estimatedpop=worldpop+(annualrise*i);
        printf("Population in year %d is= %lf \n",i,estimatedpop);
    }
return 0;
}
