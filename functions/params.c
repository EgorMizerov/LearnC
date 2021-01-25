#include <stdio.h>

void factorial(int n);

int main(){
    factorial(5);

    return 0;
}

void factorial(int n){
    int result = 1;

    for(int i = 1; i <= n; i++) {
        result *=i;
    }
    printf("%d\n", result);
}

