#include<iostream>
using namespace std;
class ZRF
{ public:
	ZRF(int Z1, int Z2){ZRF1=Z1;ZRF2=Z2;}
	void disp();
	void disp() const;  //����Ա��������
 private:
	int ZRF1,ZRF2;
};
void ZRF::disp()		
{cout<<ZRF1<<":"<<ZRF2<<endl;}
void ZRF::disp() const				  //����Ա��������
{cout<<ZRF1<<":"<<ZRF2<<endl;}
int main()
{	ZRF a(2,3);	a.disp();  		  //����void disp()
	const ZRF b(10,20);  	b.disp();  //����void disp() const
	return 0;
}
