#include <iostream>
#include <iomanip>
using namespace std;
class Time 
{	int hour;  int minute;  	int second;
public:
	Time( int hr= 0, int min= 0, int sec= 0 ) // Ĭ�Ϲ��캯��
    {  setTime( hr, min, sec ); } 
	Time &setTime( int h, int m, int s )		//����ʱ�亯��
	{ setHour( h ); setMinute( m ); setSecond( s ); return *this;} //����thisָ��
	Time &setHour( int h )					//����ʱ
	{  hour = ( h >= 0 && h < 24 ) ? h : 0; return *this; } //����thisָ��
	Time &setMinute( int m )				//���÷�
	{  minute = ( m >= 0 && m < 60 ) ? m : 0; return *this; } //����thisָ��
	Time &setSecond( int s )				//������
	{  second = ( s >= 0 && s < 60 ) ? s : 0; return *this;  } //����thisָ��
	int getHour() const	{return hour; }    //��ȡʱ
	int getMinute() const	{return minute;}   //��ȡ��
	int getSecond() const  {return second;}  	//��ȡ��
	void DispUniversal() const;  			//�������ʱ��
	void DispStandard() const;   			//�����׼ʱ��
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
	t.setHour( 18 ).setMinute( 30 ).setSecond( 22 );	//���1��������������
	cout << "Universal time: ";   t.DispUniversal();
	cout << "\nStandard time: ";   t.DispStandard();
	cout << "\nNew standard time: ";
	t.setTime( 20, 20, 20 ).DispStandard();			//���2��������������
	return 0;
}
