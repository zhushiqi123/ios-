#include<iostream>
using namespace std;
struct StructClass 						//用struct关键字定义StructClass类
{	void set_value(int n)    {value=n; }						//公有属性
	void show_value(char *name)  	{ cout<<name<<": "<<value<<endl; } 	//公有属性
private:									//为了保持私有属性，不能省略private
	int value;
};
int main()	
{   StructClass a;     	a.show_value ("a");//通过对象访问公有属性函数
    a.set_value(100);  a.show_value ("a");//通过对象访问公有属性函数
	return 0;
}
