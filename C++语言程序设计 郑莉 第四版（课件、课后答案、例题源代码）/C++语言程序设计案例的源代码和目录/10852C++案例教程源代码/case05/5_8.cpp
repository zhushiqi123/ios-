#include<iostream>
using namespace std;
int h=0,m=0,s=0; 			//����ȫ�ֱ��������о�̬������
class Clock	
{public:	
	Clock();
	void SetTime(int NewH, int NewM, int NewS); //�����βξ����к���ԭ��������
	void ShowTime();
	~Clock(){}
private:	
	int Hour,Minute,Second;
};
Clock::Clock()	{	Hour=h; 	Minute=m; Second=s; }	//ʹ��ȫ�ֱ�����ʼ��
void Clock::SetTime(int NewH, int NewM, int NewS)
{	Hour=NewH;		Minute=NewM;	Second=NewS;}
void Clock::ShowTime(){cout<<Hour<<":"<<Minute<<":"<<Second<<endl;}
//��Ĭ�Ϲ��캯����ʼ��Ϊ0:0:0
Clock globClock;  //��������globClock�����о�̬�����ڣ��ļ�������
int main()	
{	cout<<"Initial time output:"<<endl;	
	//���þ����ļ�������Ķ���globClock��
	globClock.ShowTime();		//����ĳ�Ա����������������
	globClock.SetTime(10,20,30);	//��ʱ������Ϊ10:20:30
	//���ÿ������캯������globClockΪ��ʼֵ	
	Clock myClock(globClock);	//�������п�������Ķ���myClock
	cout<<"Setted time output:"<<endl;	
	myClock.ShowTime();			//���þ��п�������Ķ���myClock
	return 0;
}
