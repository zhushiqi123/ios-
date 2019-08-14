#include <iostream >
#include <cstdlib >
using namespace std;
class CDate               					//�������������
{   int m_nDay;  int m_nMonth;  int m_nYear;  	//������
public:
	CDate(){};								//Ĭ�Ϲ��캯��
	CDate(int day, int month, int year) 			//���ι��캯��
	{	SetDate(day, month, year);}; 			//���ó�Ա��������ʼ��
	void Display();							//��ʾ����
	void AddDay();							//���ؼ�1�������
	void SetDate(int day, int month, int year)		//��������
	{	m_nDay=day;    m_nMonth=month;     m_nYear=year;}
    ~CDate() {};
private:
    bool IsLeapYear() ;                          	//�ж��Ƿ�Ϊ����
};
void CDate::Display()                            	//��ʾ����
{    char day[5] ,month[5], year[5] ;
     _itoa (m_nDay, day, 10) ;  
     _itoa (m_nMonth, month, 10) ;  
     _itoa(m_nYear,year, 10) ;
     cout << day << "/" << month << "/" << year << endl;
}
void CDate::AddDay ()      						//���ؼ�1�������
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
bool CDate::IsLeapYear()  							//�ж��Ƿ�Ϊ����
{   bool bLeap;
    if(m_nYear%4!=0)           	bLeap=false;
    else if(m_nYear%100!=0)     	bLeap=true;
    else if(m_nYear%400!=0)     	bLeap=false;
    else           			bLeap=true;
    return bLeap;
}
void main ()
{	CDate d (2004,9,25);							//���ù��캯����ʼ������
   cout << "Current date:";  
   d.Display();  d.AddDay();
	cout << "Add 1 to Current date:";  
   d.Display();
	d. SetDate(2004,10,1); 						//���ó�Ա����������������
	cout << "After reset Date,the date:";    		d.Display();
}
