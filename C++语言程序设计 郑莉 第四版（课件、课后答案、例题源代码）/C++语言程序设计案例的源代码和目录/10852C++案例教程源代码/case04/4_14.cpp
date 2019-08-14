#include <iostream >
#include <cstdlib >
using namespace std;
class CDate               					//定义电子日历类
{   int m_nDay;  int m_nMonth;  int m_nYear;  	//日月年
public:
	CDate(){};								//默认构造函数
	CDate(int day, int month, int year) 			//带参构造函数
	{	SetDate(day, month, year);}; 			//调用成员函数来初始化
	void Display();							//显示日期
	void AddDay();							//返回加1后的日期
	void SetDate(int day, int month, int year)		//设置日期
	{	m_nDay=day;    m_nMonth=month;     m_nYear=year;}
    ~CDate() {};
private:
    bool IsLeapYear() ;                          	//判断是否为闰年
};
void CDate::Display()                            	//显示日期
{    char day[5] ,month[5], year[5] ;
     _itoa (m_nDay, day, 10) ;  
     _itoa (m_nMonth, month, 10) ;  
     _itoa(m_nYear,year, 10) ;
     cout << day << "/" << month << "/" << year << endl;
}
void CDate::AddDay ()      						//返回加1后的日期
{   m_nDay++ ;
    if (IsLeapYear ())
    { if ((m_nMonth==2) && (m_nDay==30))	{m_nMonth++;m_nDay=1; return; } }
	 	 else{if((m_nMonth==2)&& (m_nDay==29)) {m_nMonth++; m_nDay=1; return; } 
	}
    if (m_nDay>31 )
    { if(m_nMonth==12) 	{ m_nYear++;   m_nMonth=1 ;    m_nDay=1 ;  }
      else  { m_nMonth++;  m_nDay=1 ; }
    }
}
bool CDate::IsLeapYear()  							//判断是否为闰年
{   bool bLeap;
    if(m_nYear%4!=0)           	bLeap=false;
    else if(m_nYear%100!=0)     	bLeap=true;
    else if(m_nYear%400!=0)     	bLeap=false;
    else           			bLeap=true;
    return bLeap;
}
void main ()
{	CDate d (2004,9,25);							//调用构造函数初始化日期
   cout << "Current date:";  
   d.Display();  d.AddDay();
	cout << "Add 1 to Current date:";  
   d.Display();
	d. SetDate(2004,10,1); 						//调用成员函数重新设置日期
	cout << "After reset Date,the date:";    		d.Display();
}
