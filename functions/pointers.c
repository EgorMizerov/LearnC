#include <stdio.h>
#define LENGTH(a)  (sizeof(a)/sizeof(a[0]))

void incriment(int*);

int main(){
    int x = 10;
    int a[] = {1, 2, 3, 4};
    int len = LENGTH(a);
    printf("%d\n", len);
    incriment(&x);
    printf("%d\n", x);
}

void incriment(int *i) {
    (*i)++;
}