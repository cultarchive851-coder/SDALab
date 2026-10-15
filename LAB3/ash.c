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

int precedence(char c) {
    switch (c) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}
int main(void) {
    char infix[MAX];
    printf("Введіть інфіксний вираз:");
    scanf("%s", infix);
     int i = 0;
    while (infix[i] != '\0') {
        char c = infix[i];

        if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a')) {
        printf("%c", c);
        }
        else if (c == '(') {
            otpravka(c);
        }
        else if (c == ')') {
            while (!emp() && stack[top] != '(') {
                    printf("%c", ww());
            }
            if (!emp()) {
                ww();
            }
        }
        else {
            while (!emp() && stack[top] != '(' &&
                              (precedence(stack[top]) > precedence(c) ||
                              (precedence(stack[top]) == precedence(c) && c != '^'))) {
                            printf("%c", ww());

        }
            otpravka(c);
    }
    i++;
    }
    while (!emp()) {
        printf("%c", ww());
    }
    printf("\n");
    return 0;

}
