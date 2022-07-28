 #include <stdio.h>

 int main()
 {
    char star[6];
    star[0]='i';
    star[1]='a';
    star[2]='m';
    star[3]='b';
    star[4]='o';
    star[5]='y';

    int i;
    int num;
    int sum=0;
    for(i=0; i<6; i++)
    {
        sum+=i;
        printf("star[%d]의 값 : %c\n", i, star[i]);
    }
   
    return 0;

    

 }
 
