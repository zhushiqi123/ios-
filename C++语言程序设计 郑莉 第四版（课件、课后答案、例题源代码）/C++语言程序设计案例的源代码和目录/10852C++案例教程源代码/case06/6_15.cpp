#include <iostream> 
using namespace std; 
class ArrayElem 
{	int x; 
public: 
	ArrayElem(int i) { x = i; } 			//���в����Ĺ��캯��
	int getx() { return x; } 
}; 
int main() 
{ 	ArrayElem obs[4] = { -1, -2, -3, -4 }; 	//�򻯵ĳ�ʼ���������鷽ʽ
	for(int i=0; i < 4; i++)    cout << "obs[" << i << "].getx(): " << obs[i].getx() << "\n"; 
	return 0; 
}
