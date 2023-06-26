//内联函数
#include <iostream>
using namespace std;

inline float max_function(float a,float b)
{
    if(a>b)
        return a;
    else
        return b;
}

#define MAX_MACRO(a,b) a>b?a:b

// #define MAX_MACRO(a,b) (a)>(b)?(a):(b)

int main()
{
    int num1=20;
    int num2=30;
    int maxv=max_function(num1,num2);
    cout<<maxv<<endl;

    maxv=MAX_MACRO(num1.num2);
    cout<<maxv<<endl;

    //宏，没有函数调用的代价。
    //宏，文本替换，内部运算复杂
    num2++内部执行2次
    maxv=MAX_MACRO(num1++.num2++);
    cout<<maxv<<endl;
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;

    num1=0xAB09;
    num2=0xEF08;
    maxv=MAX_MACRO(num1&0xEF,num2&0xEF);
    cout<<maxv<<endl;

    return 0;
}