#include <iostream>
#include <iomanip>
using namespace std;
class Time 
{	int hour;  int minute;  	int second;
public:
	Time( int hr= 0, int min= 0, int sec= 0 ) // 默认构造函数
    {  setTime( hr, min, sec ); } 
	Time &setTime( int h, int m, int s )		//设置时间函数
	{ setHour( h ); setMinute( m ); setSecond( s ); return *this;} //返回this指针
	Time &setHour( int h )					//设置时
	{  hour = ( h >= 0 && h < 24 ) ? h : 0; return *this; } //返回this指针
	Time &setMinute( int m )				//设置分
	{  minute = ( m >= 0 && m < 60 ) ? m : 0; return *this; } //返回this指针
	Time &setSecond( int s )				//设置秒
	{  second = ( s >= 0 && s < 60 ) ? s : 0; return *this;  } //返回this指针
	int getHour() const	{return hour; }    //获取时
	int getMinute() const	{return minute;}   //获取分
	int getSecond() const  {return second;}  	//获取秒
	void DispUniversal() const;  			//输出国际时间
	void DispStandard() const;   			//输出标准时间
}; 
void Time::DispUniversal() const
{   cout << setfill( '0' ) << setw( 2 ) << hour << ":" << setw( 2 ) << minute << ":"
        << setw( 2 ) << second;
} 
void Time::DispStandard() const
{   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
        << ":" << setfill( '0' ) << setw( 2 ) << minute
        << ":" << setw( 2 ) << second << ( hour < 12 ? " AM" : " PM" );
} 
int main()
{	Time t;
	t.setHour( 18 ).setMinute( 30 ).setSecond( 22 );	//语句1：连续函数调用
	cout << "Universal time: ";   t.DispUniversal();
	cout << "\nStandard time: ";   t.DispStandard();
	cout << "\nNew standard time: ";
	t.setTime( 20, 20, 20 ).DispStandard();			//语句2：连续函数调用
	return 0;
}
