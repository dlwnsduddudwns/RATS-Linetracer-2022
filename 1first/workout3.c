#include <stdio.h>

struct book 
{
    char x;
    int y;
    int z;
    int k;
};

int main() 
{
    struct book a;
    
    scanf("%c", &a.x);
    scanf("%d", &a.y);
    scanf("%d", &a.z);
    scanf("%d", &a.k);

    printf("%c\n", a.x);
    printf("%d\n", a.y);
    printf("%d\n", a.z);
    printf("%d\n", a.k);

    return 0;
}
