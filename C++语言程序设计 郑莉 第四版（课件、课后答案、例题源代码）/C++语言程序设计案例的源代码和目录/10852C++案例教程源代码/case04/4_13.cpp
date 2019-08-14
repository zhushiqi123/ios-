#include <iostream>
using namespace std;
class Second;  //前向引用声明
class First
{	Second *x;
public:
	void callSecond()
   {x->funFirst();}    //错误：在Second类定义之前使用了该类的函数
};
class Second
{	First *y;
public:
	void funFirst()		
   {cout<<"This is calling Second"<<endl;}
};
int main()		
{	First a;	a.callSecond();	return 0;}
