#include <iostream> 
using namespace std; 
int main() 
{ 	double x, y;   int *p;  
  	x = 100.20;   p = (int *) &x;		//������double * ǿ��ת��Ϊint * 
  	y = *p;      cout << y;				//����佫���ܵõ�Ԥ�ڵĽ���� 
	return 0; 
}
