#include <iostream>
using namespace std;
class Ratio
{ 	int num, den;
public:
    Ratio(int n=0, int d=1) : num(n), den(d) { }  //带默认参数值的构造函数
    void disp() { cout << num << '/' << den; }
};
int main()
{ 	Ratio x, y(3), z(20,7);		//声明的三个对象根据实参数目选择相应的构造函数
	cout << "Ratio x = ";	x.disp();
	cout << "\nRatio y = ";	y.disp();
	cout << "\nRatio z = ";	z.disp();
	return 0;
}
