#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n = 65535, m = 20;
    //1)分别输出一个整数的十进制、十六进制、和八进制表示
    cout << "1)" << n << "=" << hex << n << "=" << oct << n << endl;

    //2)使用 setbase 分别输出一个整数的十进制、十六进制和八进制表示
    cout << "2)" << setbase(10) << m << "=" << setbase(16) << m << setbase(8) << m << endl;

    //3)使用 showbase 和 setbase 分别输出一个整数的十进制、十六进制和八进制表示
    cout << "3)" << showbase; //输出表示数值进制的前缀
    cout << setbase(10) << m << "=" << setbase(16) << m << "=" << setbase(8) << m << endl;
    return 0;
}
