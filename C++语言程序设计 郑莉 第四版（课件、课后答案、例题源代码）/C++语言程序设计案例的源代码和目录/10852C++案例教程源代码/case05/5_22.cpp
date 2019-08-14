#include<iostream>
using namespace std;
class ZRF
{ public:
	ZRF(int Z1, int Z2){ZRF1=Z1;ZRF2=Z2;}
	void disp();
	void disp() const;  //常成员函数声明
 private:
	int ZRF1,ZRF2;
};
void ZRF::disp()		
{cout<<ZRF1<<":"<<ZRF2<<endl;}
void ZRF::disp() const				  //常成员函数定义
{cout<<ZRF1<<":"<<ZRF2<<endl;}
int main()
{	ZRF a(2,3);	a.disp();  		  //调用void disp()
	const ZRF b(10,20);  	b.disp();  //调用void disp() const
	return 0;
}
