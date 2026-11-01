#include <stdio.h>

int main() {
    int m, n;


    printf("Введіть кількість рядків m (від 7 до 10): ");
    if (scanf("%d", &m) != 1 || m < 7 || m > 10) {
        printf("Помилка: некоректне значення m.\n");
        return 1;
    }

    printf("Введіть кількість стовпчиків n (від 7 до 10): ");
    if (scanf("%d", &n) != 1 || n < 7 || n > 10) {
        printf("Помилка: некоректне значення n.\n");
        return 1;
    }

    double A[10][10];

    printf("\nВведіть елементи матриці (пам'ятайте, що кожен стовпчик має бути відсортований за незменшенням):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%lf", &A[i][j]);
        }
    }

    // Виведення матриці
    printf("\n--- Введена матриця ---\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%8.2f ", A[i][j]);
        }
        printf("\n");
    }

    double X;
    printf("\nВведіть число X для пошуку: ");
    scanf("%lf", &X);

    // Двійковий пошук
    printf("Результати пошуку\n");
    for (int j = 0; j < n; j++) {
        int low = 0;
        int high = m - 1;
        int found = 0;
        int found_row = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (A[mid][j] == X) {
                found = 1;
                found_row = mid;
                break; // Елемент знайдено
            } else if (A[mid][j] < X) {
                low = mid + 1; // ниж
            } else {
                high = mid - 1; // верх
                   }
        }

        if (found) {
            printf("Стовпчик %d: число %.2f знайдено у рядку %d (координати: [%d][%d])\n",
                   j, X, found_row, found_row, j);
        } else {
            printf("Стовпчик %d: число %.2f не знайдено\n", j, X);
        }
    }

    return 0;
}
