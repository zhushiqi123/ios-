#include <iostream>
#include <cassert>
using namespace std;
class pointerDataClass
{public:
    void print() const;				//输出x和数组 p的数值
    void setData();				//输入x和数组 p的数值
    pointerDataClass(int sizeP = 10);	//构造函数，创建一个sizeP大小的数组，默认10
    ~pointerDataClass();			//析构函数，释放数组p指向的内存空间
private:
    int x, lenP, *p;				//指向一个int类型数组
};
void pointerDataClass::print() const
{	cout<<"x = "<<x<<endl <<"p = ";
	for(int i = 0; i < lenP; i++)  cout<<p[i]<<" ";
	cout<<endl;
}
void pointerDataClass::setData()
{   cout<<"Enter an integer for x: ";	cin>>x;
	cout<<"Enter "<<lenP<<" numbers: ";
	for(int i = 0; i < lenP; i++)  cin>>p[i];
	cout<<endl;
}
pointerDataClass::pointerDataClass(int sizeP)
{	x=0;
	if(sizeP<=0)
	{	cout<<"Array size must be positive. Creating an array of size 10."<<endl;
		lenP=10;
	}
	else	 lenP=sizeP;
	p=new int[lenP];	assert(p!=NULL);
}
pointerDataClass::~pointerDataClass(){ delete [] p;}
int main()
{	pointerDataClass objectOne;				//声明一个对象
	objectOne.setData();	objectOne.print();	//设置显示数据
	pointerDataClass objectThree(objectOne);	//语句1：调用默认拷贝构造函数
	objectThree.print();					//显示数据
	return 0;									
}
