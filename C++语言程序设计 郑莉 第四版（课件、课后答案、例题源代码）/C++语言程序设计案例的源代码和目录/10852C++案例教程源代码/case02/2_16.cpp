#include <iostream> 
using namespace std;
int main()
{	double x = 10/7.0;	  	cout << "x = " << x << endl;  
	if (x == 1.142857142857) 	cout << "x == 10/7.0\n";	//������������������߼�����
	else cout << "x does not equal 10/7.0\n";             
	double z = 7.0*x - 10;		cout << "z = " << z << endl; 
	if (z == 0) cout << "z == 0.\n";					//������������������߼�����
	else cout << "z does not equal 0.\n";            
	return 0;
}
