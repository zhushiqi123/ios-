#include <iomanip>
using namespace std;
class Param    
{	int  interger;
public :
	Param(int x  = 0)    {interger = x;}
	friend    ostream&  operator <<(ostream&, Param&);
	friend    istream&  operator >>(istream&, Param&);
};
istream&  operator  >> (istream &is, Param &p){	return is  >>p.interger;}
ostream&  operator << (ostream &os, Param &p){	return os << p.interger;}
typedef char *  CHAR;     			//��char *����Ϊ��˵����
IOMANIPdeclare(CHAR);    			//˵����������
ostream&  arrow(ostream &os, CHAR str) //��������ַ��������Ĳ��ݷ�
{	os  << str  << "-->";	return os ;}
OMANIP (CHAR)   arrow(CHAR str) 	//���ش����ַ��������Ĳ��ݷ�
{	return OMANIP(CHAR) (arrow, str);}
int main()
{	Param  p(5);
	cout<<"The object is:"<< p << endl;
	cout<< arrow("Object p") << p  << endl; //ʹ�ô����ַ��������Ĳ��ݷ�
	return 0;
}
