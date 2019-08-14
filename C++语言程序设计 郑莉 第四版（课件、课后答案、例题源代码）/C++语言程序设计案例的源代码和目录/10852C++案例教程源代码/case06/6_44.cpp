#include <iostream>
using namespace std;
class Point						//类的声明
{ 	int X,Y,Z;
public:							//外部接口
	//其它成员函数同上案例，这里略…
	Point(int x=0, int y=0,int z=0) {X=x;Y=y;Z=z;countP++;}	//构造函数
	static int countP;				//静态数据成员引用性说明
};
int Point::countP=0;				//静态数据成员定义性说明
int main()	
{	Point Obj1(4,5,6), Obj2(14,15,16);	//声明对象
	int *count=&Point::countP;   	//语句1：声明指向类的静态数据成员的指针
	cout<<"The number of the Objects is:"
		<<*count<<endl;			//语句2：直接通过指针访问静态数据成员
	return 0;
} 
