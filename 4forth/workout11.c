#include <stdio.h>


void k(int a[10]) {
   
   for (int i = 0; i < 10; i++) {
      printf("%d ", a[i]);
   }
}

int main() {
   int a[10];

   for (int i = 0; i < 10; i++) {
      scanf("%d", &a[i]);
   }

    k(a);
    printf("\n");

    int temp;

    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 9; i++) {
            if (a[i] > a[i + 1]) {
            temp = a[i + 1];
            a[i + 1] = a[i];
            a[i] = temp;
         }
      }
   }

   k(a);
   
}