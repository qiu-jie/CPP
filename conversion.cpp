#include <iostream>

using namespace std;
int main()
{
    int num_int1=9;// int
    int num_int2='C';// 隐式类型转换 C是8位整数  8位转32位
    int num_int3=(int)'C';//显式类型转换 C-style
    int num_int4=int('C');//  .....     function-style
    int num_int5=2.8;//类型转换 float>int  舍弃小数位，不会四舍五入>> 2
    float num_float=2.3;// 类型转换 double to float (2.3f)
    short num_short=650000;//short范围30000左右 初始化范围超过、 结果是-5360

    cout<<"num_short="<<num_short<<endl;
}