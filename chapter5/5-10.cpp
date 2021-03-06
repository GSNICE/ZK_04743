#include <iostream>
using namespace std;
class CB1
{
public:
	int a; //重名
	CB1(int x)
	{ 
		a = x;
	}	
	void showa() //重名
	{
		cout << "Class CB1 ==> a =" << a << endl;
	}
};

class CB2
{
public:
	int a; //重名
	CB2(int x)
	{
		a = x;
	}
	void showa() //重名
	{
		cout << "Class CB2 ==> a = " << a << endl;
	}
};

class CD:public CB1, public CB2
{
public:
	int a;
	CD(int x, int y, int z):CB1(x),CB2(y)
	{
		a = z;
	}
	void showa() //与两个基类成员函数showa()重名
	{
		cout << "Class CD ==> a =" << a << endl;
	}
	void print3a()
	{
		cout << "a = " << a << endl;
		cout << "CB1::a =" << CB1::a << endl;
		cout << "CB2::a =" << CB2::a << endl;
	}
};

int main()
{
	CB1 CB1obj(11);
	CB1obj.showa();
	CD CDobj(101, 202, 909);
	CDobj.showa();
	cout << "CDobj.a =" << CDobj.a << endl;
	cout << "CDobj.CB2::a" << CDobj.CB2::a << endl;
	return 0;
}
	

