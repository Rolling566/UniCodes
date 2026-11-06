#include <stdio.h>

int main() {
   int num1, num2, perim, area;
   
   for (int i = 0; i < 2; i++) {
       printf("Insira %dº numero da soma: ", i+1);
       
       if (i == 0){
            scanf("%d", &num1);
       }
       else {
           scanf("%d", &num2);
       }
   }
   
   area = num1*num2;
   perim = 2*(num1+num2);
   
   printf("Perimetro = %d, e Area = %d", perim, area);
   return 0;
}