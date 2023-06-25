#include <iostream>

using namespace std;

struct Student{
    char name[4];
    int born;
    bool male;
};

int main()
{
    Student stu={"Yu",2000,true};
    Student * pStu=&stu;

    cout<<stu.name<<"was born in"<<stu.born<<".Gender:"
    <<(stu.male?"male":"female")<<endl;

    strcpy(pStu->name,"Li",4);
    pStu->born=2001;
    (*pStu).born=2002;
    pStu->male=false;

    cout<<stu.name<<"was born in"<<stu.born<<".Gender:"
    <<(stu.male?"male":"female")<<endl;

    printf("Address of stu: %p\n",pStu);
    cout<<"Address of stu: "<<pStu<<endl;
    cout<<"Address of stu: "<<&stu<<endl;
    cout<<"Address of number name: "<<&(pStu->name))<<endl;
    cout<<"Address of number born: "<<&(pStu->born))<<endl;
    cout<<"Address of number male: "<<&(pStu->male))<<endl;

    cout<<"sizeof(pStu) = "<<sizeof(pStu)<<endl;

    return 0;
}