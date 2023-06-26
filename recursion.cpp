#include <iostream>
using namespace std;

void div2(double val);

int main()
{
    div2(1024.);

    return 0;
}

//压栈，调用函数，返回。
//无穷递归ERROR
void div2(double val)
{
    cout<<"Enterint val = "<<val <<endl;
    if (val>1.0)
    {
        div2(val/2);
    }
    else
    {
        cout<<"---------------------"<<endl;
    }
    cout<<"Leaving val = "<<val<<endl;
}
