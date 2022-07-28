#include <stdio.h>

struct Student 
{
    int student_id;
    char name[256];

};

int main()
{
    struct Student student;
    scanf("%s %d", student.name, &student.student_id);
    printf("이름 : %s\n학번 : %d\n", student.name, student.student_id);

}