#include <stdio.h>

typedef struct car {
    int address;
    char type;
    int year;
    float distance;
} s_car;

int main() {
    s_car a;

    a.address = 503;
    a.type = 'A';
    a.year = 2010;
    a.distance = 31.4;

    printf("주소: %d\n", a.address);
    printf("차종: %c\n", a.type);
    printf("구매년도: %d\n", a.year);
    printf("주행거리(만km): %f\n", a.distance);


    return 0;

}

