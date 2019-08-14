#include <iostream>
using namespace std;
int gcd(int m, int n) 				//返回m 和n最大公约数
{	if (m<n)  swap(m,n);
	while (n>0)  { int r=m%n;    m = n;    n = r;  }
	return m;
}
class Ratio
{ public:
	Ratio(int n=0, int d=1) : num(n), den(d) 	
	{	 cout << "Common constructor called\n"; reduce(); }
    Ratio(const Ratio& r):num(r.num), den(r.den)  //拷贝构造函数
   {  cout << "Copy constructor called\n"; }
	void disp()	
   {cout <<num<<"/"<<den<<endl;	}
  private:
    int num, den;
    void reduce()
 {  if (num == 0 || den == 0)	 {num = 0; den = 1; return; }
		   if (den < 0)	{den *= -1; num *= -1; }
		   if (den == 1) return;
		   int sgn = (num<0?-1:1);	 int g = gcd(sgn*num,den);
		   num /= g;  den /= g;
	 }
};
Ratio func(Ratio r) //初始化形参时调用拷贝构造函数
{Ratio s = r; return s; } //返回时调用拷贝构造函数
int main()
{ 	Ratio x(20,7);
	cout<<"Ratio x is:"; x.disp();
	Ratio y(x);  						//调用拷贝构造函数，用x初始化y
	cout<<"Ratio y is:"; y.disp();
	cout<<"Func() Start:"<<endl;
	func(y); 							//调用拷贝构造函数3次
	cout<<"Func() End"<<endl;
	return 0;
}
