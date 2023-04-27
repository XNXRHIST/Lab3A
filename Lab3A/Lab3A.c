#include <stdio.h> // Підключаємо потрібну для роботи бібліотеку 

int main() { //Вводимо змінні
    int a, s;
    float result;

    printf("Введіть значення a: ");// Просимо юзера ввести необхідні для роботи данні
    scanf_s("%d", &a);

    printf("Введіть значення s: ");
    scanf_s("%d", &s);

    if (s > a) {
        result = -a - s - 2;
    }
    else if (s < 0) {
        result = s / (float)a;
    }
    else if (s == 0) {
        result = 2 * a;
    }
    else if (a % 2 == 0 && s == 4) {
        result = a / s + a * s;
    }
    else if (a % 2 != 0 && s == 4) {
        result = a - s / 2;
    }
    else if (a >= 15 && s > 8 || s == 0) {
        result = 2;
    }
    else {
        result = a / (float)s;
    }

    printf("Результат: %.2f", result);

    return 0;
}