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

class Derived:private Base
{	void SetXY(int X, int Y) {SetX(X); SetY(Y);}//���1��ʹ�û���ӿں�����������
	void SetAB(int A, int B) {a=A; b=B;}		//���������ֱ�ӷ��ʻ���ı�������
	void SetMN(int M, int N) {m=M; n=N;} 		//���������ֱ�ӷ��ʻ���Ĺ�������
	int GetSumXY() {return (GetX()+GetY());}	//���2��ʹ�û���ӿں�����ȡ����
	int GetSumAB() {return (a+b);}			//���������ֱ�ӷ��ʻ���ı�������
	int GetSumMN() {return (m+n);}			//���������ֱ�ӷ��ʻ���Ĺ�������
};
int main() 
{	Derived objD;
	objD.SetXY(1,2);	objD.SetAB(10,20);	objD.SetMN(100,200);
	cout<<"X+Y="<<objD.x+objD.y<<endl; 	//�����������ֱ�ӷ���˽������
	cout<<"A+B="<<objD.a+objD.b<<endl; 	//�����������ֱ�ӷ��ʱ�������
	cout<<"M+N="<<objD.m+objD.n<<endl; 	//�����������ֱ�ӷ��ʹ�������
	return 0;
}
