//数组 一段连续的内存，固定数目
#include<iostream>

using namespace std;

int main()
{
    //申明数组初始化，否则元素数值不可预
    int num_array1[5];
    int num_array2[5]={0,1,2,3,4};
    for (int idx = 0; idx < 5; idx++)
    {
        cout<<num_array1[idx]<<" ";
    }
    cout<<endl;
     for (int idx = 0; idx < 5; idx++)
    {
        cout<<num_array2[idx]<<" ";
    }
    cout<<endl;

    return 0;
}