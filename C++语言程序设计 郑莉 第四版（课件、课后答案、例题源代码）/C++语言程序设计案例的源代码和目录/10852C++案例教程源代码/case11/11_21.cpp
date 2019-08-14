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
typedef char *  CHAR;     			//将char *定义为单说明符
IOMANIPdeclare(CHAR);    			//说明参数类型
ostream&  arrow(ostream &os, CHAR str) //定义带有字符串参数的操纵符
{	os  << str  << "-->";	return os ;}
OMANIP (CHAR)   arrow(CHAR str) 	//重载带有字符串参数的操纵符
{	return OMANIP(CHAR) (arrow, str);}
int main()
{	Param  p(5);
	cout<<"The object is:"<< p << endl;
	cout<< arrow("Object p") << p  << endl; //使用带有字符串参数的操纵符
	return 0;
}
