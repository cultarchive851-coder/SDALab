
#include <stdio.h>
#include <math.h>

int main(void) {
    printf("Введiть число n: ");
    int n;
    scanf("%d", &n);

    unsigned long long op_schetchik = 0;

    double x = 0.5; op_schetchik++;
    double sum = 0.0; op_schetchik++;

//это дужка
    op_schetchik++;
    for (int i = 0; i <= n; i++) {
        op_schetchik += 2;

        double fa = 1.0; op_schetchik++;
        int pipa = 2 * i + 1; op_schetchik += 3;
        op_schetchik++;
        for (int j = 1; j <= pipa; j++) {
            fa *= x;
            op_schetchik += 4;
        }
        op_schetchik++;
//факториал

        double fact = 1.0; op_schetchik++;
        for (int j = 1; j <= i; j++) {
            fact *= j;
            op_schetchik += 4;
        }
        op_schetchik++;
// парне не парне
        double fifa = (i % 2 == 0) ? 1.0 : -1.0;
        op_schetchik += 3;
//собираем
        double term = (fifa * fa) / (fact * (2 * i + 1)); op_schetchik += 6;
        sum += term; op_schetchik += 2;
    }
    op_schetchik++;

    double rezultatik = (2.0 / sqrt(M_PI)) * sum;
    printf("Результат: %.7lf\n", rezultatik);
    printf("Кількість операцій: %llu\n", op_schetchik);

    return 0;
}
