#include<iostream>
using namespace std;
class ZRF
{ public:
	ZRF(int i);
	void Disp();
	void Disp() const;		//常成员函数
	const int& r;			//常引用数据成员
  private:
	const int a;
	static const int b;   	//静态常数据成员
};
const int ZRF::b=0;    		//静态常数据成员在类外说明和初始化
ZRF::ZRF(int i):a(i),r(a) {} 	//只能通过初始化列表来初始化常数据成员
void ZRF::Disp(){ cout<<"In Disp function, the data is:"<<a<<":"<<b<<":"<<r<<endl;}
void ZRF::Disp() const
{  cout<<"In const Disp function, the data is:"<<a<<":"<<b<<":"<<r<<endl;}
int main()
{   ZRF a1(10); 
    const ZRF a2(20);  
    a1.Disp(); 			//调用void Disp()
    a2.Disp();			//调用void Disp() const
	 return 0;
}
