#include<stdio.h>
//öğrenci sayısını girmeni ister sonra sırayla notları sorar ve bunların toplamını ortalamsını söyler.
int main()
{
int stu,average,i,sum=0;
printf("Please enter the number of students in the class=\n");
scanf("%d",&stu);

int stray[stu];

for(i=0;i<stu;i++)
{
    printf("Please enter %d. exam score\n",i+1);
    scanf("%d", &stray[i]);
sum += stray[i];
average = sum/stu;
}
printf("Sum of exam scores: %d\n", sum); 
printf("Average of exam scores: %d\n",average);
}