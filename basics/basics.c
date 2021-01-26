#include <stdio.h>

// Комментарий

const float PI = 3.14;
int x = 5;

int main()
{
    // if / else / else if
    if (x < 3) {
        printf("%d меньше 3\n", x);
    } else if (x == 5) {
        printf("%d равно 5\n", x);
    } else {
        printf("%d больше 3\n", x);
    }

    // switch / case
    switch (x) {
        case 3:
            printf("3\n");
            break;
        case 2:
            printf("2\n");
            break;
        default:
            printf("другое\n");
            break;
    }

    // Тернанрый оператор
    int z = x == 3? 10 : 15;    // 15
    printf("%d\n", z);

    // for
    for (int i = 1;i <= 10;i++){
        printf("%d\n", i);
    }

    // do
    do {
        printf("%d\n", z);
        z--;
    } while (z > 10);

    // while
    while(z > 5){
        printf("%d\n", z);
        z--;

        if (z == 5) break;      // Заканчивает если число 6
        if (z % 2 == 0) continue;   // Пропускаем число 8
    }

    // Массивы
    int numbers2[4] = {1, 2, 3, 4};
    int numbers[4];
    numbers[0] = 15;
    numbers[1] = 20;
    numbers[2] = 25;
    numbers[3] = 30;

    // Многомерные массивы
    int numbers3[2][2] = {{1, 2}, {3, 4}};

    // Строки
    char str[] = "Hello";
    char str2[] = {'H', 'e', 'l', 'l', 'o', 0};
    char *str3 = "Hello";
    for (int i = 0; i < 6; i++) {
        printf("%d\n", str2[i]);
        printf("%s\n", str2);
    }

    // Input
    int age;
    char name[10];
    printf("Введите ваш возраст: ");
    scanf("%d %10s", &age, name);
    printf("Ваш возраст и имя: %d %s", age, name);

    return 0;
}
