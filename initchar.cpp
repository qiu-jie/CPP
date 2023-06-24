#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char rabbit[16]={'p','e','t','e','r'};
    cout<<"String lenght is"<<strlen(rabbit)<<endl;
    for (int i = 0; i < 16; i++)
    {
        cout<<i<<":"<<+rabbit[i]<<"("<<rabbit[i]<<")"<<endl;        
    }
    char bad_pig[9]={'p','e','p','p','a',' ','p','i','g'};   
    char good_pig[10]={'p','e','p','p','a',' ','p','i','g','\0'};   

    cout<<"Rabbit is ("<<rabbit<<")"<<endl;
    cout<<"Pig's bad_pig name is ("<<bad_pig<<")"<<endl;
    cout<<"Pig's good_pig name is ("<<good_pig<<")"<<endl;

    //输出2，从'\0'开始后面不保存
    char name[10]={'Y','u','\0','s','.','0'};
    cout<<strlen(name)<<endl;

    return 0;
}