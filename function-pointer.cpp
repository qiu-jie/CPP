#include <iostream>
#include <cmath>
using namespace std;

float norm_l1(float x,float y);
float norm_l2(float x,float y);
//括号不能少
float (*norm_ptr)(float x,float y);//方法指针

int main()
{
    norm_ptr=norm_l1;
    cout<<"L1 norm of (-3.4) = "<<norm_ptr(-3.0f,4.0f)<<endl;

    norm_ptr=norm_l2;
    cout<<"L2 norm of (-3.4) = "<<(*norm_ptr)(-3.0f,4.0f)<<endl;

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