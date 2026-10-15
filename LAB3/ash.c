#include <stdio.h>
#include <sys/types.h>
#define MAX 100

char stack[MAX];
int top = -1;

int emp() {
    return top == -1;
}
int full() {
    return top == MAX - 1;
}
void otpravka(char c) {
    if (full()) {
        printf("Стек переповнений\n");
        return;
    }
    stack[++top] = c;
}
char ww() {
    if (emp()) {
        printf("Стек порожній\n");
        return '\0';
    }
    return stack[top--];

}
int main(void) {
    printf("Введіть інфіксний вираз:");
    scanf("%s", stack);

    otpravka('A');
    otpravka('B');
    printf("Верхній елемент: %c\n", ww());
    printf("Верхній елемент після видалення: %c\n", ww());
    return 0;

}
