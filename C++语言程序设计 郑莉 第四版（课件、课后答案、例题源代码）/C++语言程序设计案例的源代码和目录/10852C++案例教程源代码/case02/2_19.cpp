#include <iostream> 
using namespace std; 
int main() 
{	int a, b; 
	cout << "Enter numerator: ";   	cin >> a; 
	cout << "Enter denominator: ";   	cin >> b; 
	if(b) cout << "Divide Result is: " << a / b << '\n'; 	//�ų�����Ϊ������
	else cout << "Divide by zero!\n"; 
	return 0; 
}
