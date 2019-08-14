#include <iostream>
using namespace std;
int main()
{	const char BEEP = '\b';					//定义字符常量
	const int MAXINT = 2147483647;			//定义整型常量
	const float KM_PER_MI = 1.60934;			//定义浮点型常量
	const double PI = 3.14159265358979323846;	//定义双精度型常量
	//PI=3.1415926;							//错误！不能赋值
	cout<<"The MAXINT is:"<<MAXINT<<endl;
	cout<<"The KM_PER_MI is:"<<KM_PER_MI<<endl;
	cout<<"The PI is:"<<PI<<endl;
	cout<<"The BEEP is:"<<BEEP<<endl;
	return 0;
}
