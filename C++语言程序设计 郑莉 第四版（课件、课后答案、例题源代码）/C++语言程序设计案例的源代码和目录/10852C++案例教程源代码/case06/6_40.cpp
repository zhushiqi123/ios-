#include <iostream>
using namespace std;
class NumClass 
{	int num; 
public: 
	void set_num(int val) { num = val; } 
	void show_num(){ cout << "The num is:"<<num << "\n"; } 
};

int main() 
{	NumClass ob[2], *p; 		//������������Ͷ���ָ��
	ob[0].set_num(10);  ob[1].set_num(20); 	//ͨ���������������±�������Ԫ�� 
	p = &ob[0];  				//�������������Ԫ�صĵ�ַ����ָ�� 
	p->show_num();				//ʹ��ָ����ʾ����Ԫ�� ob[0] 
	p++;  	  p->show_num(); 	//ʹ��ָ����ʾ����Ԫ�� ob[1]  
	p--;  	  p->show_num(); 	//�ٴ���ʾob[0] 
	return 0; 
}
