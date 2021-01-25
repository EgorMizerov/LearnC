#include <stdio.h>
#define print(a) printf("%d \n", a)

int factorial(int n);

int main(){
    print(factorial(5));
    print(factorial(6));
    print(factorial(7));

    // Ключевое слово register заносит переиеннкю в регистр процессора
    register int c = 10;


    return 0;
}

int factorial(int n){
    // Ключевое слово static позволяет функции создать переменную result один раз
    // и при последующих вызывов функции брать содержимое переменной из памяти
    static int result = 1;

    for(int i = 1; i <= n; i++) {
        result *=i;
    }

    return result;
}

