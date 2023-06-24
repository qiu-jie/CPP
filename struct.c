#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef
struct _Student{
    char name[4];
    int born;
    bool male;
}Student;

int main()
{
    //struct Student stu1;
    //strcpy(stu1.name,"Yu");
    //stu1.born=2000;
    //stu1.male=true;

    Student stu2={"Yu",2000,true};

    printf("Student %s, born in %d, gender %s\n",
        stu2.name,
        stu2.born,
        stu2.male ? "male":"female");
    
    Student students[100];
    students[50].born=2002;
    return 0;
}
