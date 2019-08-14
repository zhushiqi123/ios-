#include<iostream>
using namespace std;
class COpertor
{	long x; 								//私有数据成员
public:	  
	COpertor(long m){x=m;}
	void Show()	{ cout<<"The num is:"<<num<<", x="<<x<<endl;}
	COpertor& operator++();             //语句1：重载自加型前置运算符
	COpertor  operator++(int);           //语句2：重载自加型后置运算符
	friend  COpertor  operator--(COpertor&,int);   //语句3：重载自减型后置运算符
	static  int num;
};
COpertor& COpertor::operator++()  		//定义前置自增运算符函数, 返回对象引用。
{  	++x;		                       //this所指的的对象已经增1 
	cout<<"COpertor::operator++():"<<num++<<", x="<<x<<endl;
	return *this;                     //函数自动返回变动后的值
}
COpertor COpertor::operator++(int) 		//定义后置自增运算符函数, 返回数值对象。
{  	cout<<"COpertor::operator++(int):"<<num++<<", x="<<x<<endl;
	COpertor temp(*this);              //创建临时对象保存原先的结果
	x++;		                        //this所指的的对象已经增1 
	return temp;                      //函数返回保存原先结果的临时对象
}
COpertor operator--(COpertor& r,int) //定义后置自减运算符为全局函数，返回数值对象
{   cout<<"operator--(COpertor&,int):"<<COpertor::num++<<", x="<<r.x<<endl;
	COpertor temp(r);              //创建临时对象保存原先结果
	r.x--;                        //引用r所指的内存已经减1 
	return temp;                  //函数返回保存原先结果的临时对象 
}
int COpertor::num=1;
int main()       
{   	COpertor a(1); 
	a.operator++(1);  	a.operator++();  
	++a--++;         a.Show(); 	
	return 0;
}  
