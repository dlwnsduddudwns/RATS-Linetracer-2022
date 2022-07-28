#include <stdio.h>

void Hello(char str[]) {
    printf("%s", str);
}

int main() {
    char arr[5];
    scanf("%s", arr);
    Hello(arr);
    return 0;
}