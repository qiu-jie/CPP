#include <cstring>
class Student
{
  private:
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

}