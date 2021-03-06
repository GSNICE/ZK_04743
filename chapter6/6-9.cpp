#include <iostream>
using namespace std;
class ABase
{
public:
    ABase()
    {
        cout << "ABase 构造函数" << endl;
    }
    ~ABase()
    {
        cout << "ABase 析构函数" << endl;
    }
};

class Derived:public ABase
{
public:
    int w, h;
    Derived()
    {
        cout << "Derived 的构造函数" << endl;
        w = 4;
        h = 7;
    }
    ~Derived()
    {
        cout << "Derived 析构函数" << endl;
    }
};

int main()
{
    ABase *p = new Derived(); //使用基类指针指向用new创建的派生类对象
    delete p;
    return 0;
}
