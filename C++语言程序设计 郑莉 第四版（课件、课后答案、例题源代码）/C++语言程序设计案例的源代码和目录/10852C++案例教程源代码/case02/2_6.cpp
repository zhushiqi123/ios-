#include <iostream> 
using namespace std; 
int main() 
{	int x, y; 
	x = 10;  y = 3; 
	cout << x << " / " << y << " is " << x / y  			//�����ĳ�������
		  <<" with x % y is " << x % y << endl;    			//������ȡ�����
	x ++;   --y ;									//ʹ���������������
	cout << x << " / " << y << " is " << x / y << "\n"    		//�����ĳ�������
		  << x << " % " << y << " is " << x % y<<endl;  		//������ȡ�����
	return 0; 
}
