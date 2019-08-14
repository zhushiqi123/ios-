#include <iostream>
using namespace std;
class Point	//类的声明
{public:		//外部接口
	//其它成员函数同上案例，这里略…
	Point(int x=0, int y=0,int z=0) {X=x;Y=y;Z=z;countP++;}	//构造函数
	static int GetC() {return countP;}	//静态函数成员
private:	//私有数据
	int X,Y,Z;	
	static int countP;	//静态数据成员引用性说明
};
int Point::countP=0;	//静态数据成员定义性说明
int main()	//主函数
{ int (*gc)()=Point::GetC;	//语句1：声明一个指向类的静态成员函数指针
  Point Obj(4,5,6), Obj2(14,15,16);		//声明对象
  cout<<"The number of the Objects is:"<<gc()<<endl;//语句2：通过函数指针调用静态成员函数
  return 0;
}
