#include <iostream>
using namespace std;

//idx<(n) array,n参数带上括号
#define PRINT_ARRAY(array,n) \
for (int idx = 0; idx < (n); idx++) \
    cout<<"array["<<idx<<"] = "<<(array)[idx]<<endl;

int main()
{
    int numbers[4]={0,1,2,3};
    PRINT_ARRAY(numbers,4);

    int *p =numbers+1;
    p++;

    cout<<"numbers = "<<numbers<<endl;
    cout<<"p = "<< p << endl;

    *p=20;//change 2 to 20
    *(p-1)=10;//change 1 to 10
    p[1]=30;//change 3 to 30

    PRINT_ARRAY(numbers,4);

    return 0;
}
