#include <iostream>
using namespace std;
int main()
{	int n=44;
	//int& rn=55; 			//����55����һ��������
	int& rn=n;  				//rn �Ǳ��� n�ı���
	cout << "The value of n is: " << n << ", The value rn is: " << rn << endl;
	--n;  	cout << "The value of n is: " << n << ", The value rn is: " << rn << endl;
	rn *= 3;	cout << "The value of n is: " << n << ", The value rn is: " << rn << endl;
	return 0;
}
