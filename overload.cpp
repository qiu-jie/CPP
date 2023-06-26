#include <iostream>
using namespace std;

int sum(int x, int y)
{
    cout<<"sum(int ,int) is called"<<endl;
    return x+y;
}

double sum(double x, double y)
{
    cout<<"sum(double ,double) is called"<<endl;
    return x+y;
}

float sum(float x, float y)
{
    cout<<"sum(float ,float) is called"<<endl;
    return x+y;
}

// //如果只是返回值不同不可以编译
// double sum(int x, int y)
// {
//     cout<<"sum(int ,int) is called"<<endl;
//     return x+y;
// }

int main()
{
    cout<<"sum = "<<sum(1,2)<<endl;
    cout<<"sum = "<<sum(1.1f,2.2f)<<endl;
    cout<<"sum = "<<sum(1.1,2.2)<<endl;

    //int和double两个方法都可以调用，有歧义
    cout<<"sum = "<<sum(1,2.2)<<endl;

    return 0;
}