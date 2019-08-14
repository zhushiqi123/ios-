#include <iostream> 
#include <utility>							//包含pair对组头文件

using namespace std;
int main()
{	pair<int,float> p=make_pair(18,3.14f);		//声明并初始化pair对组类型
	cout << p.first << "  " << p.second << endl;//调用pair对组数据成员
	p.first=10;	p.second=1.0f;			//向pair对组变量p的数据成员赋值
	cout << p.first << "  " << p.second << endl;	//调用pair对组数据成员
	return 0;
}
