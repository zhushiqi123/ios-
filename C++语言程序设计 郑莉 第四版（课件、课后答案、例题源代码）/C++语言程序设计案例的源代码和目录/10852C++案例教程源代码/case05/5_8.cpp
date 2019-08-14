#include<iostream>
using namespace std;
int h=0,m=0,s=0; 			//声明全局变量，具有静态生存期
class Clock	
{public:	
	Clock();
	void SetTime(int NewH, int NewM, int NewS); //三个形参均具有函数原型作用域
	void ShowTime();
	~Clock(){}
private:	
	int Hour,Minute,Second;
};
Clock::Clock()	{	Hour=h; 	Minute=m; Second=s; }	//使用全局变量初始化
void Clock::SetTime(int NewH, int NewM, int NewS)
{	Hour=NewH;		Minute=NewM;	Second=NewS;}
void Clock::ShowTime(){cout<<Hour<<":"<<Minute<<":"<<Second<<endl;}
//由默认构造函数初始化为0:0:0
Clock globClock;  //声明对象globClock，具有静态生存期，文件作用域
int main()	
{	cout<<"Initial time output:"<<endl;	
	//引用具有文件作用域的对象globClock：
	globClock.ShowTime();		//对象的成员函数具有类作用域
	globClock.SetTime(10,20,30);	//将时间设置为10:20:30
	//调用拷贝构造函数，以globClock为初始值	
	Clock myClock(globClock);	//声明具有块作用域的对象myClock
	cout<<"Setted time output:"<<endl;	
	myClock.ShowTime();			//引用具有块作用域的对象myClock
	return 0;
}
