#include <iostream>
using namespace std;
class Point									//类的声明
{ int X,Y,Z;
public:	//外部接口
	Point(int x=0, int y=0,int z=0) {X=x;Y=y;Z=z;}	//构造函数
	int GetX() {return X;}						//内联函数，返回X
	int GetY() {return Y;}						//内联函数，返回Y
	int GetZ() {return Z;}						//内联函数，返回Z
};
int main()										//主函数
{   Point Obj(4,5,6);							//声明对象Obj
	Point *pObj=&Obj;							//声明对象指针并初始化
	int (Point::*p_GetX)()=Point::GetX;			//声明成员函数指针并初始化
	int (Point::*p_GetY)()=Point::GetY;			//声明成员函数指针并初始化
	int (Point::*p_GetZ)()=Point::GetZ;			//声明成员函数指针并初始化
	cout<<"The coordinate of X is:"<<(Obj.*p_GetX)()<<endl;//语句1：使用成员函数指针
	cout<<"The coordinate of Y is:"<<(pObj->GetY)()<<endl; //语句2：使用对象指针
	cout<<"The coordinate of Z is:"<<Obj.GetZ()<<endl;	 	//语句3：使用对象名
	return 0;
}
