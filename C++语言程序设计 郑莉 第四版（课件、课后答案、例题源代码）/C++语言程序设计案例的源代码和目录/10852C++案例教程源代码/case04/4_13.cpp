#include <iostream>
using namespace std;
class Second;  //ǰ����������
class First
{	Second *x;
public:
	void callSecond()
   {x->funFirst();}    //������Second�ඨ��֮ǰʹ���˸���ĺ���
};
class Second
{	First *y;
public:
	void funFirst()		
   {cout<<"This is calling Second"<<endl;}
};
int main()		
{	First a;	a.callSecond();	return 0;}
