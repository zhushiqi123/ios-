#include <iomanip >
using namespace std;
class Param    
{int  integer;
public :
	Param (int x = 0)    {integer = x;}
	friend ostream&  operator <<(ostream&, Param&);
	friend istream&  operator >>(istream&, Param&);
};
istream&  operator >> (istream &is, Param &p){	return is  >>p.integer;}
ostream&  operator << (ostream &os, Param &p){	return os << p.integer;}
ostream& arrow(ostream &os, int i) 					//����������Ͳ����Ĳ��ݷ�
{	os  << i  << "-->";	return os;}
OMANIP(int) arrow(int i) {return OMANIP(int) (arrow,i);} //���ش������Ͳ����Ĳ��ݷ�
int main ()
{	Param    p[5];
	for(int i= 0; i < 5; i++)		cin>> p[i];
	for(i = 0; i < 5; i++)	 cout << arrow(i) << p[i] << endl; //ʹ�ô������Ͳ����Ĳ��ݷ�
	return 0;
}
