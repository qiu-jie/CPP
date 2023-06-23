#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float f1=1.2f;
    float f2=f1*1000000000000000;
    cout<<std::fixed<<std::setprecision(15)<<f1<<endl;
    cout<<std::fixed<<std::setprecision(15)<<f2<<endl;
    return 0;

}
//[0,1]之间有无穷个实数
//2^32 不够表达所有实数
//浮点运算有微小的误差，控制误差在可控范围内。
