#include <iostream> 
using namespace std; 
class FriFunClass 
{	int a, b; 
public: 
	FriFunClass(int i, int j) { a=i; b=j; } 
	friend int FriFun(FriFunClass x); 	//��Ԫ��Ա���� 
}; 
int FriFun(FriFunClass x) 			//ע�⣺FriFun() �����κ���ĳ�Ա����
{	//���ں���FriFun() ����FriFunClass����Ԫ����������������ֱ�ӷ���a��b 
	int max = x.a < x.b ? x.a : x.b; 
	for(int i=2; i <= max; i++) 
		if((x.a%i)==0 && (x.b%i)==0) return i; 
	return 0; 
} 
int main() 
{	FriFunClass n(10, 20); 			//���������
	if(FriFun(n))  cout << "Common denominator is " <<FriFun(n) << "\n"; 
	else  cout << "No common denominator.\n"; 
	return 0; 
}
