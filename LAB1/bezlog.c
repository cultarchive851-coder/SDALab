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
            if (x > 2) {
                if (x <= 12) {
                    y = -9 * x * x * x + 5 * x * x;
                    printf("Результат: y = %.4lf\n", y);
                } else {
                    if (x > 22) {
                        if (x < 32) {
                            y = -9 * x * x * x + 5 * x * x;
                            printf("Результат: y = %.4lf\n", y);
                        } else {
                            printf("Число не дійсне\n");
                        }
                    } else {
                        printf("Число не дійсне\n");
                    }
                }
            } else {
                printf("Число не дійсне\n");
            }
        }








return 0;
}
