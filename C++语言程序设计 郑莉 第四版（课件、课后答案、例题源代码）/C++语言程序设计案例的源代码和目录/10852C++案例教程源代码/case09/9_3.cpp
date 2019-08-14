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
template <class T1,class T2>
class Derived: public Base<T2> 				//从类模板派生出类模板
{	T1 y;
public:
	Derived(T1 a,T2 j):Base<T2>(j)  {y=a; } 	//构造函数
	T1 gety() {return y;}
	void disp() 
	{cout<<"The value of y in Derived is :"<<y<< ", and x in Derived is :"<<getx()<<endl;}
};
int main()
{	Base<int> obj_B(888);  obj_B.disp();
	Derived<int,int>  obj_D1(1,2);
	Derived<double,int> obj_D2(8.8,6);
	Derived<char *,int> obj_D3("zrf",10);
	Derived<char,int> obj_D4('=',20);
	obj_D1.disp();  obj_D2.disp();
	obj_D3.disp();  obj_D4.disp();
	return 0;
}
