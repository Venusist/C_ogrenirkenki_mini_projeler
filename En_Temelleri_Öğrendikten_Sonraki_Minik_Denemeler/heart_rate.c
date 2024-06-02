#include<stdio.h>

int isLeapYear(int year) {
    if ((year%4==0 && year%100 != 0) || (year%400==0)){
        return 1; //Artık Yıl
    } else {
        return 0;}//artık yıl değil
}

int isValidDate(int day, int month, int year) {
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if(isLeapYear(year)) {
        days_in_month[1]=29;
    }

    if(month<1 || month>12 || (day<1 || day>days_in_month[month-1])){
        printf("please enter a valid day\n");
        return 0;
    }
return 1;
}

int main()
{
    int bday,bmonth,byear;
    int tday,tmonth,tyear;
    int age,maxheartrate,mintargethr,maxtargethr;
    
    do {
    printf("Please enter your date of birth in the following order day month year:\n");
    scanf("%d %d %d",&bday,&bmonth,&byear);

    if(!isValidDate(bday,bmonth,byear)){
        printf("please enter a valid date\n");
    }
    else {
        break;
    }
} while (1);

do {
printf("Please enter today's date as day month year:\n");
scanf("%d %d %d",&tday,&tmonth,&tyear);

if(!isValidDate(tday,tmonth,tyear)) {
    printf("Please enter valid date.\n");}
     else{
    break; }
}
while (1);

age=tyear-byear;

if(tmonth<bmonth||(tmonth==bmonth && tday<bday)){ 
    age--;
}

maxheartrate=220-age;
mintargethr=(maxheartrate*50)/100;
maxtargethr=(maxheartrate*85)/100;

printf("Your age:%d\n",age);
printf("Your maximum heart rate is %d \n",maxheartrate);
printf("Your target heartrate is between %d and %d \n",mintargethr,maxtargethr);

return 0; 
}