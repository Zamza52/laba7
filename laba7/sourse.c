#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int Task1();
int task2();

int main() {
    setlocale(LC_CTYPE, "RUS");

    task1();
    task2();

        return 0;
}
int task1()
{
    setlocale(LC_ALL, "Russian");

    char c;

    printf("Введите символ: ");
    scanf("%c", &c);

    switch (c)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Это цифра\n");
        break;
    default:
        printf("Это буква\n");
    }

    system("pause");
    return 0;
}
int task2() 
{
        setlocale(LC_ALL, "Russian");

        float x, y;
        char c;

        printf("Введите выражение (например 5+3, 2^10): ");
        scanf("%f%c%f", &x, &c, &y);

        switch (c)
        {
        case '+':
            printf("=%f\n", x + y);
            break;
        case '-':
            printf("=%f\n", x - y);
            break;
        case '*':
            printf("=%f\n", x * y);
            break;
        case '/':
            printf("=%f\n", x / y);
            break;
        case '^':
            printf("=%f\n", pow(x, y));
            break;
        default:
            printf("Неизвестная операция\n");
        }

        system("pause");
        return 0;
    }