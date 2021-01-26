#include <stdio.h>
#define ARRAY_SIZE 4

int main() {
    /*
     * тип *имя_массива [размер];
     * тип *имя_массива [] = инициализатор;
     * тип *имя_массива [размер] = инициализатор;
     */

    int a[ARRAY_SIZE] = {1, 2, 3, 4};                   // Массив
    int *pa[ARRAY_SIZE] = {&a[0], &a[1], &a[2], &a[3]}; // Массив указателей

    // Изминение массива "a" через массив указатей "pa"
    *pa[0] = 10;
    printf("%d\n", a[0]);



    char str[] = "Hello";
    char *str2 = "Goodbye";
    char *str3[] = {"Banana", "Apple", "Orange"};

    printf("%s\n", str2);
    printf("%d\n", str2[1]);
    printf("%lu\n", sizeof(str3));
    printf("%lu\n", sizeof(str3[0]));

    return 0;
}