#include<iostream>
using namespace std;
class PubClass 
{public:										//以下成员均为公有成员
     int value;								//公有数据成员
     void set(int n) 	{value=n; }				//公有函数成员
     int get(void) 	{return value; }			//公有函数成员
};
int main()
{	PubClass a;    							     //创建对象
	a.set(10);	cout<<"a.get()="<<a.get()<<endl; 	//直接访问对象的公有成员函数
	a.value=20; cout<<"a.value="<<a.value<<endl; 	//直接访问对象的公有数据成员
	return 0;
}
