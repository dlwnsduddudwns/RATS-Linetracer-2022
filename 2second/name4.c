#include <stdio.h>

int main()
{
    int grade;
    printf("당신의 코딩 점수를 입력하세요: ");
    scanf("%d", &grade);
    if(grade>=90)
    {
        printf("A학점.\n");
    }
    else if(grade>=80)
    {
        printf("B학점.\n");
    }
    else if(grade>=70)
    {
        printf("C학점.\n");
    }
    else if(grade>=60)
    {
        printf("D학점.\n");
    }

    else
    {
        printf("F학점.\n");
    }


}