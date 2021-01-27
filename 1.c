#include <stdio.h>

int main(void){
    float x;
    // WriteLain()
    printf("Введите число: ");
    // ReadLine()
    scanf("%f", &x);

    float sum = 0;
    for (int i = 11; i <= x; i += 11){
        sum += 1.0 / i;
    }

    printf("%f \n", sum);
    return 0;
}