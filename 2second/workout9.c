#include <stdio.h>

int main() 
{
    int a, b, c;
    int n = 0;

    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        for (b = n; b >= a; b--) 
        {
            printf("-");
        }
        for (c = 1; c <= (2*a - 1); c++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}