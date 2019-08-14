#include <iostream>
using namespace std;
class ZRF
{public:
	 int den;								//公有成员具有局部作用域
    ZRF(int n=0, int d=1) : num(n), den(d) { } //带默认参数值的构造函数
    void disp() { cout << num << '/' << den; } //公有函数具有局部作用域
 private:
    int num;
};
int main()
{	ZRF z(20);
	cout << "z = ";  z.disp();   				//在类外访问类的公有函数
	cout << "\nz = ";  z.den=50;   z.disp(); 	//在类外访问类的公有成员
	cout << "\nz = "; z.disp();
	//z.num=10;  							//错误：在类外不能访问类的私有成员
	return 0;
}
