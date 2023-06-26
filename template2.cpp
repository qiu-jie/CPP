#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T>
T sum(T x,T y)
{
    cout<<"The input type is "<<typeid(T).name()<<endl;
    return x+y;
}
// //显式实例化
// template double sum<double>(double,double);

int main()
{
    //T to int warning:float to int, 2.2 to 20,3.0 to 3,result=5
    cout<<"sum = "<<sum<int>(2.2f,3.0f)<<endl;
    //隐式实例化 T to float result 5.2
    cout<<"sum = "<<sum(2.2f,3.0f)<<endl;
    return 0;
}

