#include <iostream> 
using namespace std; 
class NumClass 
{	int num; 
public: 
	void set_num(int val) { num = val; } 
	void show_num(){ cout << "The num is:"<<num << "\n"; } 
}; 
int main() 
{	NumClass ob, *p; 				//����һ�������ָ������ָ�� 
	ob.set_num(10);   ob.show_num();	//ͨ������obֱ�ӵ��ó�Ա���� 
	p = &ob;						//ʹ����ָ��pָ�����ob 
	p->set_num(20);  p->show_num(); 	//ͨ��ָ����ó�Ա���� 
	return 0; 
}
