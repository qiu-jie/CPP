#include<iostream>

using namespace std;

int main ()
{
    int num_array[5];
    //数组不是一个对象，数组的名字就是数组的首地址。
    //读写的时候不进行边界检查，程序执行效率高。
    for (int idx  = -1; idx<=5; idx++)
    {
        num_array[idx]=idx*idx;
    }
    for (int idx  = -1; idx<=5; idx++)
    {
        cout<<"num_array["<<idx<<"] = "<<num_array[idx]<<endl;
    }
    
    return 0;
}