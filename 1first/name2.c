#include <stdio.h>

int main() {
    int a = 10;
    int b;

    printf("숫자 한 개를 입력: ");
    scanf("%d", &b);
    printf("입력한 숫자: %d\n", b);
    printf("입력한 숫자 + 10 = %d", a+b);

    return 0;
}