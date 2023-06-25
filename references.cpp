#include <iostream>
using namespace std;

struct Matrix{
    int rows;
    int cols;
    float *pData;
};


int main()
{

    int num=0;
    //引用num_ref  别名,对应同一数据
    int &num_ref=num;

    cout<<"num = "<<num<<endl;

    num_ref=10;
    cout<<"num = "<<num<<endl;

    return 0;
}