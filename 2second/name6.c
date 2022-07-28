#include <stdio.h>

int main()
{
    int i;
    int num, sum;

    
    printf("덧셈하는 프로그램.\n");
    printf("원하는 수: ");
    scanf("%d", &num);

    sum;
    for(i=0; i<=num; i++)
    {
        sum=sum+i;
    }
    printf("1부터 원하는 수까지 더한 값: %d\n",sum);

    return 0;
}