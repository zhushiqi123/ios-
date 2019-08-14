#include <iostream>
using namespace std;
class Ratio
{ 	int num, den;
public:
    Ratio() : num(0), den(1) { }				//使用初始化列表的默认构造函数
    Ratio(int n) : num(n), den(1) { }			//使用初始化列表的一个参数的构造函数
    Ratio(int n, int d) : num(n), den(d) { }	//使用初始化列表的带两个参数构造函数
    void disp() { cout << num << '/' << den; }	//输出结果
};
int main()
{ 	Ratio x, y(3), z(20,7);		//声明的三个对象根据实参数目选择相应的构造函数
	cout << "Ratio x = ";	x.disp();
	cout << "\nRatio y = ";	y.disp();
	cout << "\nRatio z = ";	z.disp();
	return 0;
}
