#include <stdio.h>

int main(){
    int x = 10;
    int *px; // Инициализация указателя
    px = &x; // Присваивание ссылки указателю

    printf("%p\n", px);
    printf("%d\n", *px);     // Разыменование указателя
    printf("%p\n", &px);     // Адресс указателя
    px = NULL;                      // Нулеове значение
    printf("%p\n", px);

    return 0;
}