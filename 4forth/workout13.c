#include <stdio.h>


void s(int a,int b) {

    for (int k = 0; k < b; k++) {
        for (int i = 0; i < a; i++) {
            printf("*");
        }

        printf("\n");
    }

    return;
    
}

int main() {

   int a, b;
   scanf("%d %d", &a, &b);
   s(a, b);
   
   return 0;

}