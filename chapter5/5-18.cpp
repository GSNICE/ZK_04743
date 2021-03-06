#include <iostream>
using namespace std;
class CBase
{
public:
	CBase(){}
	CBase(CBase & c)
	{
		cout << "CBase::复制构造函数" << endl;
	}
	CBase & operator=(const CBase & b)
	{
		cout << "CBase::operator=" << endl;
	}
};

class CDerived:public CBase
{
public:
	CDerived()
	{
		cout << "CDerived::构造函数" << endl;
	}
};

int main()
{
	CDerived d1, d2;
	CDerived d3(d1); //d3初始化过程中会调用类 CBase 的复制构造函数
	d2 = d1;         //会调用类 CBase 重载的"="运算符
	return 0;
}


