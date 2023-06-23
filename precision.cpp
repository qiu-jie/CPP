#include<iostream>
using namespace std;

int main()
{
    float f1=2.34E+10f;
    float f2=f1+10;

    cout.setf(ios_base::fixed,ios_base::floatfield);//fixed-point
    cout<<"f1="<<f1<<endl;
    cout<<"f2="<<f2<<endl;
    cout<<"f1-f2="<<f1-f2<<endl;
    cout<<"(f1-f2==0)="<<(f1-f2==0)<<endl;

    return 0;
}

//采样精度不够，f1-f2==0 true  
//10相对于f1 f2 太小
//if(f1==f2) //bad
//if(fabs(f1-f2)<FLT_EPSILON) //good   
//fabs取绝对值 作比较 FLT_EPSILON（宏）