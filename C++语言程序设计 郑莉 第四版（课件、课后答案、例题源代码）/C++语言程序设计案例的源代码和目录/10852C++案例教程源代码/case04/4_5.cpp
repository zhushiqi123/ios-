#include <iostream>
using namespace std;
class ClockClass 
{ int Hour,Minute,Second;
public: 
//声明带默认形参值的成员函数
	void ClockClass::SetTime(int NewH=0, int NewM=0, int NewS=0) 
	{ 	Hour=NewH;		Minute=NewM;	Second=NewS;	}
	void ShowTime()	{cout<<Hour<<":"<<Minute<<":"<<Second<<endl;}
} ;
int main()
{   ClockClass c; 		//创建对象c
	c.SetTime();			//使用默认形参值设置时间
    c.ShowTime ();    	//显示对象的默认时间
    c.SetTime (12,1,6);    //给对象设置新值
    c.ShowTime () ;    	//显示对象的新设定时间
    return 0;
}
