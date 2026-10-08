#include <stdio.h>
#include <math.h>

int main(void) {
    printf("Введiть число n:");
    int n;
    scanf("%d", &n);

    unsigned long long op_schetchik = 0;

    double x = 0.5; op_schetchik++;

    double bibo = x; op_schetchik++;
    double sum = bibo; op_schetchik++;

    op_schetchik++;
    for ( int i = 1; i <= n; i++) {
        op_schetchik += 2;

        bibo = bibo * (-x *x / i);
        op_schetchik += 5;

        sum += bibo / (2 * i + 1);
        op_schetchik += 5;
    }
    op_schetchik++;

    double rezultatik = (2.0 / sqrt(M_PI)) * sum;
    op_schetchik += 4;
    printf("Результат: %f\n", rezultatik);
    printf("Кількість операцій: %llu\n", op_schetchik);

    return 0;
}
