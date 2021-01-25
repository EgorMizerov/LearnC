#include <stdio.h>

#define print(a) printf("%d\n", a)  // Макрос
#define min(a,b) (a > b ? b : a)    // Маркос

#define printInt(a) printf(#a"=%d \n", a) // Директива # позволяет заключить текст параметра в кавчки
#define printInts(a, b, c) printf("%d \n", a##b##c) // Директива ## позволяет объединить две лексиомы

#define N 23

int main(){
    print(min(N, 40));

    #undef N    // Удаялем значение N
    #define N 25
    printInt(N);
    printInts(10, 20, 30);

    return 0;
}