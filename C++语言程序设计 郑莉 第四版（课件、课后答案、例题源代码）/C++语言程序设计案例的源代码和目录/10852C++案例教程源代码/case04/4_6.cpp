#include <iostream>
using namespace std;
class ClockClass 
{int Hour,Minute,Second;
public:
	void SetTime(int NewH=0, int NewM=0, int NewS=0); //��Ա����ԭ������
	//�����ڶ���������Ա����
	void ShowTime()	{cout<<Hour<<":"<<Minute<<":"<<Second<<endl;} 
} ;
//�����ⶨ��������Ա����
inline void ClockClass::SetTime(int NewH, int NewM, int NewS) 
{	Hour=NewH;	Minute=NewM;	Second=NewS;}

int main()
{   ClockClass c; 		//��������c
	c.SetTime();			//ʹ��Ĭ���β�ֵ����ʱ��
    c.ShowTime ();    	//��ʾ�����Ĭ��ʱ��
    c.SetTime (12,1,6);    //������������ֵ
    c.ShowTime () ;    	//��ʾ��������趨ʱ��
    return 0;
}
