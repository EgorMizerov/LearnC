#include <stdio.h>

// gcc import1.c import2.c

extern int x;
void func1();

int y = 5;

void func2(){
    printf("Hello from func2\n");
    func1();
    printf("%d\n", x);
}

int main(){
    func2();

    return 0;
}