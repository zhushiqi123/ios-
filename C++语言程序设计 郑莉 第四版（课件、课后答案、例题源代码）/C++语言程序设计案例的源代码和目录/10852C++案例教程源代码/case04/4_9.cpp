#include <iostream>
using namespace std;
class Ratio
{	int num, den;
public:
	Ratio(int n=0, int d=1) : num(n), den(d) {cout << "Common constructor called\n";	}
	//�������캯��
   Ratio(const Ratio& r):num(r.num), den(r.den) {cout<< "Copy constructor called\n"; }
	void disp()	{cout <<num<<"/"<<den<<endl;}
};
int main()
{ 	Ratio x(20,7);
	cout<<"Ratio x is:"; 	x.disp();
	Ratio y(x);  					//���ÿ������캯������x��ʼ��y
	cout<<"Ratio y is:"; 	y.disp();
	return 0;
}
