#include <iostream>

using namespace std;

float mysquare(float value)
{
    float result=0.0f;
    if (value>=1.0f||value<=0)
    {
        cerr<<"The input is out of range."<<endl;
        goto EXIT_ERROR;
    }
    result=value*value;
    return result;
    EXIT_ERROR:
        return 0;
}

int main()
{
    float value;
    cout<<"Input a floatint-point number."<<endl;
    cin >> value;

    float result=mysquare(value);

    if (result>0)
    {
        cout<<"The square is"<<result<<"."<<endl;
    }
    return 0;
}
