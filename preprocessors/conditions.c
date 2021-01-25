#include <stdio.h>

#define DEBUG

int main() {
#ifdef DEBUG    // #ifdef проверят пределён ли индендификатор
    printf("Debug mode \n");
#else           // Аналогично else
    printf("Production mode\n")
#endif          // Конец условия

#if 10<5        // Аналогично if
    printf("%d\n", 5);
#else
    printf("%d\n", 10);
#endif


#ifndef PRODUCTION  // #ifndef проеряет не определен ли идендификатор
    printf("Don't production\n");
#endif


    return 0;
}
