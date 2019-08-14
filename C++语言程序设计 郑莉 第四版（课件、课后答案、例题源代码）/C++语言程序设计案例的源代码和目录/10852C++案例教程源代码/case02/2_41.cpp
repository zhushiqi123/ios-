#include <iostream>
using namespace std ;
enum weekday									//定义枚举类型
{ 	Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}; 
int main()
{	int  i;
	weekday week1 = Thursday;
	cout << "week1 = " << week1 << endl;	i = week1;  	//枚举类型赋值给int变量
	cout << "i = " << i << endl;
	enum weekday week2, week3;
	week2 = (weekday)6; 							//int型强制类型转换为枚举类型
	cout << "week2 = " << week2 << endl;
	week3 = weekday(4);							//int型强制类型转换为枚举类型
	cout << "week3 = " << week3 << endl;
	return 0;
}
