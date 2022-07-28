#include <stdio.h>


int max(int a[10]) {
   return a[9];
}


int min(int b[10]) {
   return b[0];
}


int main() {
    int c[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &c[i]);
    }

   int temp;
   for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 9; i++) {
            if (c[i] > c[i + 1]) {
            temp = c[i + 1];
            c[i + 1] = c[i];
            c[i] = temp;
            }
        }
    }

   printf("%d %d",min(c), max(c));
   
   return 0;

}