#include <iostream> 
using namespace std; 
class Base
{	int x,y;				//˽�����ݳ�Ա
protected:
	int a,b; 				//�������ݳ�Ա
public:
	int m,n; 				//�������ݳ�Ա
	void SetX(int X) {x=X;}//Ϊ˽�����ݳ�Ա���ýӿ�
	void SetY(int Y) {y=Y;}//Ϊ˽�����ݳ�Ա���ýӿ�
	int GetX(){return x;}	//Ϊ˽�����ݳ�Ա���ýӿ�
	int GetY(){return y;}	//Ϊ˽�����ݳ�Ա���ýӿ�
};

class ExtBase:protected Base{};				//һ���̳�Ϊ�����̳�
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
