#include <iostream>
using namespace std;

struct Student1{
    int id;      //4字节
    bool male;   //1字节
    char label;  //1字节
    float height;//4字节
};

struct Student2{
    int id;
    bool male;
    float height;
    char label;
};

int main()
{
    //(1111)(1100)(1111)       12字节
    cout<<"Size of Student1: "<< sizeof(Student1)<<endl;
    //(1111)(1000)(1111)(1000) 16字节
    cout<<"Size of Student2: "<< sizeof(Student2)<<endl;

    return 0;
}