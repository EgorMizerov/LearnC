#include <stdio.h>
#define ARRAY_SIZE 4

int main() {
    int a[ARRAY_SIZE] = {5, 2, 8, 1};
    // *a = 5, так как массив без индекса ссылается на свой первый индекс
    printf("a[0] = %d\n\n", *a);

    // Преебор массива 1
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("a[%d]: adress=%p \t value=%d \n", i, a + i, a[i]);
    }

    // Массиву нельзя изменить адресс "a++; a = &b"
    int *a0 = a;           // a[0] = 5
    int *a2 = (a0 + 2);    // a[2] = 8
    printf("\na[2]=%d \n", *a2);

    // Но можно изменить элементы массива по ссылке
    *a2 = *a2 + 2;
    printf("a[2]=%d \n\n", a[2]);

    int c = 0;
    // Преебор массива 2
    for (int *ptr = a; ptr < &a[ARRAY_SIZE]; ptr++) {
        printf("a[%d]: adress=%p \t value=%d \n", c, ptr, *ptr);
        c++;
    }

    printf("\n");

    // Перебор 2-мерного массива
    int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}