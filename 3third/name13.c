#include <stdio.h>

int main()
{
    int mode;
    scanf("%d", &mode);

    int x, y, result;
    scanf("%d %d", &x, &y);
    if(mode==0)
    {
        result = x+y;
    }   else if (mode ==1)
    {
        result = x-y;
    }   else if (mode ==2)
    {
        result =x*y;
    }   else 
    {
        result =x%y;
    }

    printf("Result : %d\n", result);

}