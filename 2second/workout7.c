#include <stdio.h>

int main() 
{
    int num, sum;
    num = 0;
    sum = 1;
    scanf("%d", &num);

    for (int i = num; i > 0; i--) 
{
    sum *= i;
}
    printf("%d", sum);
    return 0;
}

