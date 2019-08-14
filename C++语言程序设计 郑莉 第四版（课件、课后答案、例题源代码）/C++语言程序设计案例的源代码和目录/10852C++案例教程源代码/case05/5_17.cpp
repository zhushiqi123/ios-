#include <iostream>
#include <cmath>
using namespace std;
class Trig
{	double  x,y,z; 
	double area()  {double d=(x+y+z)/2;  return sqrt(d* (d-x)* (d-y)* (d-z)) ; } 
  public :
	Trig (int i,int j,int k)  { x=i;y=j;z=k;  }
	int isTriangle () 								  //判断是否构成三角形
	{	if  (x+y>z && x+z>y && y+z>x)  return 1 ;
		else	 return 0;
	}
	friend  double twoarea(Trig tl,Trig t2)  //声明友元函数
	{	return tl.area()+t2.area() ;} 
};
int main()
{	Trig tl (3,5,7) ,t2 (8, 7, 12) ;
    if (tl.isTriangle() && t2.isTriangle())
		 cout << "Total area of two Triangles:" << twoarea(tl,t2)  << endl;
      else  cout << "Cannot form a Triangle"<< endl;
	return 0;
}
