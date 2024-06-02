#include<stdio.h>
int isLeapYear(int byear) {
    if ((byear%4==0 && byear%100 != 0) || (byear%400==0)){
        return 1; //Artık Yıl
    } else {
        return 0;}//artık yıl değil
    }
int isValidDate(int bday, int bmonth, int byear) {
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if(isLeapYear(byear)) {
        days_in_month[1]=29;
    }

    if(bmonth< 1 || bmonth>12 || (bday<1 || bday>days_in_month[bmonth-1])){
        printf("please enter a valid day\n");
        return 0;
    }
return 1;
}
int main() {
    int bday,bmonth,byear;
    do {
    printf("Please enter your date of birth in the following order day month year:\n");
    scanf("%d %d %d",&bday,&bmonth,&byear);

    if(!isValidDate(bday,bmonth,byear)){
        printf("please enter a valid date\n");
        return 0;
    }
    else {
        printf("Valid date: %02d-%02d-%04d\n",bday,bmonth,byear);
        break;
    }
} while (1);

return 0;
}