#include <stdio.h>

int main()
{
int n;
int num=0;

scanf("%d", &n);

for(int i=1; i<=n; i++){
      if (i % 2 == 0){
              if(i % 7 == 0){
                    num++;
              }
      }
}

printf("%d\n", num);

}