#include<iostream>
using namespace std;
class ZRF
{ public:
	ZRF(int i);
	void Disp();
	void Disp() const;		//����Ա����
	const int& r;			//���������ݳ�Ա
  private:
	const int a;
	static const int b;   	//��̬�����ݳ�Ա
};
const int ZRF::b=0;    		//��̬�����ݳ�Ա������˵���ͳ�ʼ��
ZRF::ZRF(int i):a(i),r(a) {} 	//ֻ��ͨ����ʼ���б�����ʼ�������ݳ�Ա
void ZRF::Disp(){ cout<<"In Disp function, the data is:"<<a<<":"<<b<<":"<<r<<endl;}
void ZRF::Disp() const
{  cout<<"In const Disp function, the data is:"<<a<<":"<<b<<":"<<r<<endl;}
int main()
{   ZRF a1(10); 
    const ZRF a2(20);  
    a1.Disp(); 			//����void Disp()
    a2.Disp();			//����void Disp() const
	 return 0;
}
