#include <stdio.h>

struct school {

char *student_name ;
int student_id ;
int student_age ;


}student;


int main()
{
    char string [20];
    char *name = string;
    printf("Enter your name :");
    gets(name);

    printf("Enter your id :");
    scanf("%d",&student.student_id);

    printf("Enter your age :");
    scanf("%d",&student.student_age);

    student.student_name = name ;

    printf("\nThe student name is %s \n",student.student_name);
    printf("The student id is %d \n",student.student_id);
    printf("The student age is %d \n",student.student_age);

    return 0 ;
}
