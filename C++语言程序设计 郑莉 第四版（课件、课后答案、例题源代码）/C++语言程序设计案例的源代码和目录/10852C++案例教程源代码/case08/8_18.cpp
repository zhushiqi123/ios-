#include <iostream>
using namespace std;
class X
{public:
	X() { p = new int[3]; cout << "X().  "; }	//���붯̬�ڴ�
	~X() { delete [] p; cout << "~X().\n"; }		//�ͷŶ�̬�ڴ�
private:
	int* p;
};
class Y : public X
{public:
	Y() { q = new int[1024]; cout << "Y():T::q = " << q << ".  "; }	//���붯̬�ڴ�
	~Y() { delete [] q; cout << "~Y().  "; }						//�ͷŶ�̬�ڴ�
private:
	int* q;
};
int main()
{	for (int i = 0; i < 8; i++)
    {	X* r = new Y;	//�ظ�������̬����
		delete r;		//�ظ��ͷŶ�̬����
    }
return 0;
}
