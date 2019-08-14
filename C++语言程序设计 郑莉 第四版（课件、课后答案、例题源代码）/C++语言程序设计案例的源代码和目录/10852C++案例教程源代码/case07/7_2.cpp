#include <iostream> 
using namespace std; 
class Base
{	int x,y;				//私有数据成员
protected:
	int a,b; 				//保护数据成员
public:
	int m,n; 				//公有数据成员
	void SetX(int X) {x=X;}//为私有数据成员设置接口
	void SetY(int Y) {y=Y;}//为私有数据成员设置接口
	int GetX(){return x;}	//为私有数据成员设置接口
	int GetY(){return y;}	//为私有数据成员设置接口
};

class Derived:private Base
{	void SetXY(int X, int Y) {SetX(X); SetY(Y);}//语句1：使用基类接口函数设置数据
	void SetAB(int A, int B) {a=A; b=B;}		//派生类可以直接访问基类的保护数据
	void SetMN(int M, int N) {m=M; n=N;} 		//派生类可以直接访问基类的公有数据
	int GetSumXY() {return (GetX()+GetY());}	//语句2：使用基类接口函数提取数据
	int GetSumAB() {return (a+b);}			//派生类可以直接访问基类的保护数据
	int GetSumMN() {return (m+n);}			//派生类可以直接访问基类的公有数据
};
int main() 
{	Derived objD;
	objD.SetXY(1,2);	objD.SetAB(10,20);	objD.SetMN(100,200);
	cout<<"X+Y="<<objD.x+objD.y<<endl; 	//派生类对象不能直接访问私有数据
	cout<<"A+B="<<objD.a+objD.b<<endl; 	//派生类对象不能直接访问保护数据
	cout<<"M+N="<<objD.m+objD.n<<endl; 	//派生类对象不能直接访问公有数据
	return 0;
}
