//ture(1) or false(0)
#include <iostream>

using namespace std;
int main()
{
    bool b1=true;//bool是整数类型
    int i=b1;
    bool b2=-256; //bool的值非0就是1；-256!=0 
    cout<<"i="<<i<<endl;
    cout<<"b1="<<b1<<endl;
    cout<<"b2="<<b2<<endl;//输出1
    cout<<true<<endl;

}

//typedef char bool; //C语言早期做法
//#define true 1
//#define false 0

//Defined C99 
//#include <stdbool.h>