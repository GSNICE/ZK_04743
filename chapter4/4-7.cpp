#include <iostream>
using namespace std;
class CDemo
{
private:
	int n;
public:
	CDemo(int i = 0):n(i){}
	CDemo & operator++(); //用于前置形式
	CDemo operator++(int); //用于后置形式
	operator int() {return n;}
	friend CDemo & operator--(CDemo &);
	friend CDemo operator--(CDemo &, int);
};

CDemo & CDemo::operator++() //前置++
{
	n++;
	return * this;
}

CDemo CDemo::operator++(int k) //后置++
{
	CDemo tmp(*this); //记录修改前的对象
	n++;
	return tmp;
}

CDemo & operator--(CDemo & d)  //前置--
{
	d.n--;
	return d;
}

CDemo operator--(CDemo & d, int)  //后置--
{
	CDemo tmp(d);
	d.n--;
	return tmp;
}

int main()
{
	CDemo d(10);
	cout << (d++) << ","; //等价于 "d.operator++(0);" 输出 10
	cout << d << ","; //输出 11
	cout << (++d) << ","; //等价于 "d.operator++();" 输出 12
	cout << d << ","; //输出 12
	cout << (d--) << ","; //等价于 "operator--(d, 0);" 输出 12
	cout << d << ","; //输出 11
	cout << (--d) << ","; //等价于 "operator--(d);" 输出 10
	cout << d << endl; //输出 10
	return 0;
}
