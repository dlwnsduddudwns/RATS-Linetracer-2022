#include <stdio.h>

int main() 
{
    int integer[10];

    for (int i = 0; i < sizeof(integer)/sizeof(int); i++) 
    {
        scanf("%d", &integer[i]);
    }
    for (int j = 0; j < sizeof(integer)/sizeof(int); j++) 
    {
        printf("%d\n", integer[j]);
    }

    printf("\n");
    return 0;
}