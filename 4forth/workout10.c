#include <stdio.h>

int n1(int a, int b) {
    int result;
    result = a+b;  
    return result;
    
}

int n2(int a, int b) {
    int result;
    result = a-b;
    return result;
}

int n3(int a, int b) {
    int result;
    result = a*b;
    return result;
}

int n4(int a, int b) {
    int result;
    result = a/b;
    return result;
}


int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d %d %d %d", n1(num1, num2), n2(num1, num2), n3(num1, num2), n4(num1, num2));
    return 0;

}