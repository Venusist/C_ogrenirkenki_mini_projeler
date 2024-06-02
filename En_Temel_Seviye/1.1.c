#include <stdio.h>
/*Kullanıcının girdiği iki değer arasındaki tek ve çift sayıların sayısını bul*/

int main()
  {
    
    int n1,n2,i;
    int evennumb=0,oddnumb=0;
    printf("Please enter the first number value :"); 
        scanf("%d",&n1);
    printf("Please enter the second number value :");
        scanf("%d",&n2);
 if(n1<=n2){
       for (i=n1;i<=n2;i++) {
         if (i%2==0) {
            evennumb++;}
             else {
            oddnumb++;}}}
  else {
     for (int i = n1; i >= n2; i--) {
      if (i % 2 == 0) {
        evennumb++; }
          else {
           oddnumb++;}}}
    printf("Even numbers: %d\n", evennumb);
    printf("Odd numbers: %d\n", oddnumb);
    return 0;
}
