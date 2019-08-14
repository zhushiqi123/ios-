#include <iostream>
using namespace std;
class PriClass 
{   int iv;    double dv;				//私有数据成员
public:
    void set_PriClass(int n,double x);		//公有函数成员为接口函数
    void show_PriClass(char*);			//公有函数成员为接口函数
};
//定义PriClass类的接口成员函数
void PriClass::set_PriClass(int n,double x) { iv=n;  dv=x;}
void PriClass::show_PriClass(char *name)
{   cout<<name<<": "<<"iv=" <<iv<< ", dv=" <<dv<< endl;}
int main()
{   PriClass obj;    		 obj.show_PriClass("obj");//通过接口函数来访问数据成员
    obj.set_PriClass(5,5.5);  obj.show_PriClass("obj");//通过接口函数来访问数据成员
	return 0;
}
