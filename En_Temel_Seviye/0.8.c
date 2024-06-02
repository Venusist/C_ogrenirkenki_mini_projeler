#include<stdio.h>
//istediğin kadar not girmeni ister ve bunların ortalamasını hesaplar
int main(void)
{
    int counter;
    int grade;
    int total;

    float average;


    total = 0;
    counter = 0;


    printf("Enter grade, -1 to end: ");
    scanf("%d", &grade);


    while (grade != -1) {
        total = total + grade;
        counter = counter + 1;
        printf( "Enter grade, -1 to end: " ); /* prompt for input */
        scanf("%d", &grade);
    }

        if (counter != 0 ) 
        {
            average = (float) total /counter;
            printf("Class average is %.2f\n", average );
        }
        else {
            printf("No grades were entered\n");
        }

 return 0;
}

        /* pseudocode
initialize total to zero
initialize counter to zero

Input the first grade
While the user has not as yet entered the sentinel
Add this grade into the running total
Add one to the grade counter
Input the next grade

If the counter is not equal to zero
Set the avarage to the total divided by the counter
Print the avarage
else
Print No grades were entered*/

