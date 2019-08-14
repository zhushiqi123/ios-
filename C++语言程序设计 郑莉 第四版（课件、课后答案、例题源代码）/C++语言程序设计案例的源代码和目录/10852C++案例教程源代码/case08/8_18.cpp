#include <iostream>
using namespace std;
class X
{public:
	X() { p = new int[3]; cout << "X().  "; }	//申请动态内存
	~X() { delete [] p; cout << "~X().\n"; }		//释放动态内存
private:
	int* p;
};
class Y : public X
{public:
	Y() { q = new int[1024]; cout << "Y():T::q = " << q << ".  "; }	//申请动态内存
	~Y() { delete [] q; cout << "~Y().  "; }						//释放动态内存
private:
	int* q;
};
int main()
{	for (int i = 0; i < 8; i++)
    {	X* r = new Y;	//重复创建动态对象
		delete r;		//重复释放动态对象
    }
return 0;
}
