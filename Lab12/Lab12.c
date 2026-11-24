#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "ru_RU.UTF-8");

    printf("=== ЗАДАНИЕ 1 ===\n");
    char* pc;
    int* pi;
    double* pd;
    printf("char*: %d байт, int*: %d байт, double*: %d байт\n", (int)sizeof(pc), (int)sizeof(pi), (int)sizeof(pd));

    printf("\n=== ЗАДАНИЕ 3 ===\n");
    int x = 5, * pa = &x;
    printf("int: %p -> ++: %p\n", pa, pa + 1);

    double d = 5.5, * p_d = &d;
    printf("double: %p -> ++: %p\n", p_d, p_d + 1);

    char c = 'A', * p_c = &c;
    printf("char: %p -> ++: %p\n", p_c, p_c + 1);

    long double ld = 10.5, * p_ld = &ld;
    printf("long double: %p -> ++: %p\n", p_ld, p_ld + 1);

    short unsigned int su = 10, * p_su = &su;
    printf("short unsigned int: %p -> ++: %p\n", p_su, p_su + 1);

    _Bool b = 1, * p_b = &b;
    printf("_Bool: %p -> ++: %p\n", p_b, p_b + 1);

    printf("\n=== ЗАДАНИЕ 4 ===\n");
    float array[10] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.0f };
    float* ptr_a;

    printf("array = %p, &array[0] = %p, &array = %p\n", array, &array[0], &array);

    ptr_a = array;
    printf("Начало: %p (%.1f)\n", ptr_a, *ptr_a);
    ptr_a++;
    printf("ptr_a++: %p (%.1f)\n", ptr_a, *ptr_a);
    ptr_a = ptr_a + 4;
    printf("ptr_a + 4: %p (%.1f)\n", ptr_a, *ptr_a);
    ptr_a = ptr_a - 2;
    printf("ptr_a - 2: %p (%.1f)\n", ptr_a, *ptr_a);

    printf("\nПрямой проход (шаг 2):\n");
    for (ptr_a = array; ptr_a < array + 10; ptr_a += 2) {
        printf("%p -> %.1f\n", ptr_a, *ptr_a);
    }

    printf("\nОбратный проход:\n");
    for (ptr_a = &array[9]; ptr_a >= array; ptr_a--) {
        printf("%p -> %.1f\n", ptr_a, *ptr_a);
    }

    printf("\n=== ЗАДАНИЕ 5 ===\n");
    int val_int = 12345;
    float val_float = 12345.0f;
    double val_double = 12345.0;
    unsigned char* p;
    int i;

    printf("int (12345):      ");
    p = (unsigned char*)&val_int;
    for (i = 0; i < sizeof(val_int); i++) printf("%.2x ", p[i]);

    printf("\nfloat (12345.0):  ");
    p = (unsigned char*)&val_float;
    for (i = 0; i < sizeof(val_float); i++) printf("%.2x ", p[i]);

    printf("\ndouble (12345.0): ");
    p = (unsigned char*)&val_double;
    for (i = 0; i < sizeof(val_double); i++) printf("%.2x ", p[i]);
    printf("\n");

    return 0;
}