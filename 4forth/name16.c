#include <stdio.h>

int a() {
    return 10;
}

int b() {
    return 3;
}

int main() {
    printf("%d %d %d %d %d", a()+b(), a()-b(), a()*b(), a()/b(), a()%b());
    return 0;
}