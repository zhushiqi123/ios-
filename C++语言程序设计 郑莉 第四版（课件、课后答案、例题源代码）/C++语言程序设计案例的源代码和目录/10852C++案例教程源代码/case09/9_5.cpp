#include <iostream>
using namespace std;

template <class T>
class Base
{	T x;
public:
	Base(int i) {x=i;}
	T getx() {return x;}
	void disp() {cout<<"The value of x in Base is :"<<x<<endl;}
};


class Derived: public Base<int>			//从类模板实例派生出非模板类
{	int y;
public:
	Derived(int a,int j): Base<int>(j)  {y=a;} 
	int gety() {return y;}
	void disp() 
	{cout<<"The value of y in Derived is :"<<y	<<" , and x in Derived is :"<<getx()<<endl;}
};
int main()
{	Base<int> obj_B(888);	obj_B.disp();
	Derived obj_D(1,2);	obj_D.disp();
	return 0;
}
