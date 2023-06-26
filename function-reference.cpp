#include <iostream>
#include <cmath>
using namespace std;

float norm_l1(float x,float y);
float norm_l2(float x,float y);
//括号不能少
float (&norm_ref)(float x,float y)=norm_l1;//方法引用

int main()
{
    cout<<"L1 norm of (-3.4) = "<<norm_ref(-3,4)<<endl;

    return 0;
}

float norm_l1(float x,float y)
{
    //取绝对值
    return fabs(x)+fabs(y);
}

float norm_l2(float x,float y)
{
    //开根
    return sqrt(x*x+y*y);
}