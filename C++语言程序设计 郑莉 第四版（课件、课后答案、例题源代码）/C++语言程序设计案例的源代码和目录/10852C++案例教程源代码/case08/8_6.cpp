#include <iostream>
using namespace std;
class CVector
{	int x,y;
public:
	CVector() {}
	CVector(int i,int j) {x=i;y=j;}
	void disp() {cout<<"("<<x<<","<<y<<")"<<endl;}
	void operator += (CVector A)	{x+=A.x;		y+=A.y;	}//���ظ��ϸ�ֵ�����+=
	void operator -= (CVector A) 	{x-=A.x;		y-=A.y;	}//���ظ��ϸ�ֵ�����-=
};
int main()
{	CVector A(1,2),B(4,2);
	cout<<"A:";	A.disp();
	cout<<"B:";	B.disp();
	A+=B; 	cout<<"A+=B:";	A.disp();		//ʹ�����صĸ��ϸ�ֵ�����+=
	A-=B; 	cout<<"A-=B:";	A.disp();		//ʹ�����صĸ��ϸ�ֵ�����-=
	return 0;
}
