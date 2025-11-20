#include <stdio.h>

int add(int, int);

int main() {
    int a = 10;
    int b = 10;
    int sum = add(a,b);
    printf("The sum is %d\n", sum);
    return 0;
}