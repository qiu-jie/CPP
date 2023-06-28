#include <iostream>
#include <cstring>

class Student
{
  private:
    char name[4];
    int born;
    bool male;
  public:  
    void setName(const char *s)
    {
        strncpy(name,s,sizeof(name));
    }
    void setBorn(int b)
    {
        born = b;
    }
    void setGender(bool isMale)
    {
        male=this.male;
    }
    void printInfo()
    {
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Born in: "<<born<<std::endl;
        std::cout<<"Gender: "<<(male?"Male":"Female")<<std::endl;
    }
};

int main()
{
    Student yu;
    yu.setName("Yu");
    yu.setBorn(2000);
    yu.setGender(ture);
    //private 不可访问
    //yu.born=2001;//born是私有成员
    yu.printInfo();
    std::cout<<"It's name is "<<yu.name<<std::endl;
    return 0;
}