#include <stdio.h>

int main(void) {
    double x;
    double y;

   printf("Введiть число x: ");
   scanf("%lf", &x);
   if (x <= 0) {
       y = -x * x - 12;
       printf("Результат: y = %.4lf\n", y);
     } else {
         if ((x > 2 && x <= 12) || (x > 22 && x < 32)) {
             y = -9 * x * x * x + 5 * x * x;
             printf("Результат: y = %.4lf\n", y);
         } else {
             printf("Невiдоме число\n");
         }
     }

}
