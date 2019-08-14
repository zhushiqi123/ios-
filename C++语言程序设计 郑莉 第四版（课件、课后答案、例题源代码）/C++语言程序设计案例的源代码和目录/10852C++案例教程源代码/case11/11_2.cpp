#include <iostream>
#include <sstream>
using namespace std;
int main()
{ 	ostringstream ostr;                 //创建输出流类对象，连接一个匿名string对象
	double x, y;
	cout << "Input x and y: "; cin >> x >> y;
	ostr << x << " * " << y << " = " << x * y << endl;    //输入数据项
	cout << ostr.str() ;                //输出匿名string对象
	return 0;
}
