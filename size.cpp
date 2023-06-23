#include<iostream>

using namespace std;
int main()
{
    int i=0;
    short s=0;
    //sizeof不是函数、是一个操作符。函数的参数必须是一个变量。
    cout<<"sizeof(int)="<<sizeof(int)<<endl;
    cout<<"sizeof(i)="<<sizeof(i)<<endl;
    cout<<"sizeof(short)="<<sizeof(short)<<endl;
    cout<<"sizeof(long)="<<sizeof(long)<<endl;
    cout<<"sizeof(size_t)="<<sizeof(size_t)<<endl;
    return 0;
}

//size_t
//是一个整数，一般用来表达内存大小、元素个数等
//sizeof 32-bit 64-bit
//int是2^32，内存4Gb大小
