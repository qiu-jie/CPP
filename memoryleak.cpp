#include <iostream>
using namespace std;

struct Student{
    char name[4];
    int born;
    bool male
};

int main()
{
    int *p1=new int;

    int *p2=new int();//初始化为0

    int *p3=new int (5);

    int *p4=new int {};//初始化为0

    int *p5=new int {5};

    //结构体(struct)等价类(class)
    Student *ps1=new Student;

    Student *ps2=new Student{"Yu",2000,1};

    //释放指针
    delete p1;
    
    //都是释放内存，数组需要加上[]。
    //不带[]析构函数释放第一个内存
    //带[]释放数组所有内存
    //deleta pa1;
    //delete []pas1

    return 0;
}