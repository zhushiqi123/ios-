#include <iostream> 
using namespace std; 
class PubClass 
{ public: 
	static int num; 			//���о�̬���ݳ�Ա������
	void shownum() { cout << "The num is:"<<num << endl; } 
}; 
int PubClass::num; 			//�����ⶨ��num 
int main() 
{	PubClass a, b; 
	PubClass::num = 1000;   		//ͨ���������ʾ�̬��Աnum 
	a.shownum();   b.shownum(); 
	a.num = 2000;   			//ͨ��������ʾ�̬��Աnum 
	a.shownum();   b.shownum(); 
	return 0; 
}
