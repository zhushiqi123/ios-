#include <iostream>  
using namespace std;
int main()
{	int m=1000;  			
   cout << "m = " << m << endl;
	m *= 1000000000;    	
   cout << "m = " << m << endl;   	//���1���������
	float n=1000.0;  		
   cout << "n = " << n << endl;
	n *= n;   n *= n;   n *= n;   n *= n;  
	cout << "n = " << n << endl;   	//���2�����������
	return 0;
}
