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

class ExtBase:protected Base{};				//一级继承为保护继承
class Derived:public ExtBase
{public:
	void SetXY(int X, int Y) {SetX(X); SetY(Y);}
	void SetAB(int A, int B) {a=A; b=B;}		
	void SetMN(int M, int N) {m=M; n=N;} 		
	int GetSumXY() {return (GetX()+GetY());}	
	int GetSumAB() {return (a+b);}			
	int GetSumMN() {return (m+n);}			
};
int main() 
{	Derived objD;
	objD.SetXY(1,2);	objD.SetAB(10,20);	objD.SetMN(100,200);
	cout<<"X+Y="<<objD.GetSumXY()<<endl; 
	cout<<"A+B="<<objD.GetSumAB()<<endl; 
	cout<<"M+N="<<objD.GetSumMN()<<endl; 
	return 0;
}
