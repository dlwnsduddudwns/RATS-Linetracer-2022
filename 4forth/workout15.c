#include <stdio.h>

void num(int a, int b) {
    printf("%d %d %d %d", a+b, a-b, a*b, a/b);
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    num(num1, num2);
}
