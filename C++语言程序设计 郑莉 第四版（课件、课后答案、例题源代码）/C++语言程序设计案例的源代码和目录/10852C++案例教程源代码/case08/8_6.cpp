#include <iostream>
using namespace std;
class CVector
{	int x,y;
public:
	CVector() {}
	CVector(int i,int j) {x=i;y=j;}
	void disp() {cout<<"("<<x<<","<<y<<")"<<endl;}
	void operator += (CVector A)	{x+=A.x;		y+=A.y;	}//重载复合赋值运算符+=
	void operator -= (CVector A) 	{x-=A.x;		y-=A.y;	}//重载复合赋值运算符-=
};
int main()
{	CVector A(1,2),B(4,2);
	cout<<"A:";	A.disp();
	cout<<"B:";	B.disp();
	A+=B; 	cout<<"A+=B:";	A.disp();		//使用重载的复合赋值运算符+=
	A-=B; 	cout<<"A-=B:";	A.disp();		//使用重载的复合赋值运算符-=
	return 0;
}
