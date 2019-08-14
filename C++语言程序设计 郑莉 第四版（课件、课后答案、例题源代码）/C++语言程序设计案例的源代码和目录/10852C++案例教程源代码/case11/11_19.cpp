#include <iostream>
#include <iomanip>
using namespace std;
class NoParam    
{int  integer;
public :
	NoParam(int x  = 0)    {integer= x;}
	friend  ostream&  operator <<(ostream&, NoParam&);
	friend  istream&  operator >>(istream&, NoParam&);
};
istream&  operator >> (istream &is, NoParam &np){	return is  >>np.integer;}
ostream&  operator << (ostream &os, NoParam &np){	return os << np.integer;}
ostream&  arrow(ostream &os)	{	return os  <<"-->";}	//定义无参操作操纵符
int main ()
{	NoParam np(5);
	cout << "The object is:"<<np <<endl;
	cout << "Object np" << arrow << np << endl;			//使用无参操纵符
	return 0;
}
