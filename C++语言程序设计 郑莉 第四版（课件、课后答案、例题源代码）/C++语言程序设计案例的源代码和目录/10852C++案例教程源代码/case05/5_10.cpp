#include <iostream> 
using namespace std; 
class PriClass 
{	static int num; 				//˽���;�̬��Ա
  public: 
	void setnum(int i) { num = i; }; 
	void shownum() { cout << "The num is:"<<num << "\n"; } 
}; 
int PriClass::num; 				//�����ⶨ�� num 
int main() 
{	PriClass a, b; 
	a.shownum();   b.shownum(); 
	a.setnum(1000); 				//���þ�̬��ԱnumΪ1000 
	a.shownum();   b.shownum(); 
	return 0; 
}
