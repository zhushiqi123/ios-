#include <iostream>
using namespace std;
class Base
{	int x;
public:
	Base(int i) {x=i;}
	int getx() {return x;}
	void disp() {cout<<"The value of x in Base is :"<<x<<endl;}
};
template <class T>
class Derived: public Base	 //从非模板类派生出类模板
{	T y;
public:
	Derived(T a,int j): Base(j) {y=a;}
	T gety() {return y;}
	void disp() 
	{cout<<"The value of y in Derived is :"<<y	<<" , and x in Derived is :"<<getx()<<endl;}
};
int main()
{	Base obj_B(888);	obj_B.disp();
	Derived<int> obj_D1(1,2);
	Derived<double> obj_D2(8.8,6);
	Derived<char *> obj_D3("zrf",10);
	Derived<char> obj_D4('=',20);
	obj_D1.disp();	obj_D2.disp();
	obj_D3.disp();	obj_D4.disp();
	return 0;
}
