#include<iostream>
using namespace std;
class PubClass 
{public:										//���³�Ա��Ϊ���г�Ա
     int value;								//�������ݳ�Ա
     void set(int n) 	{value=n; }				//���к�����Ա
     int get(void) 	{return value; }			//���к�����Ա
};
int main()
{	PubClass a;    							     //��������
	a.set(10);	cout<<"a.get()="<<a.get()<<endl; 	//ֱ�ӷ��ʶ���Ĺ��г�Ա����
	a.value=20; cout<<"a.value="<<a.value<<endl; 	//ֱ�ӷ��ʶ���Ĺ������ݳ�Ա
	return 0;
}
