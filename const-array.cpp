#include <iostream>

using namespace std;

//常量数组的元素不可以修改 const
//累加常量数组的值，求和
float array_sum(const float values[],size_t length)
{
    float sum=0.0f;
    for (int i = 0; i < length; i++)
    {
        sum+=values[i];
    }
    return sum;
}

int main()
{
    float values[4]={1.1f,2.2f,3.3f,4.4f};
    float sum=array_sum(values,4);
    return 0;
}

