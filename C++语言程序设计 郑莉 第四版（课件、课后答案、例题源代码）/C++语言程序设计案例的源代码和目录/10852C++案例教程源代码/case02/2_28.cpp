#include <iostream>
using namespace std;
int main()
{ 	long limits;
  	cout << "Enter a positive integer: ";  	cin >> limits;
  	cout << "Factorial numbers of "<<0<<" is " << 1<<endl;
  	cout << "Factorial numbers of "<<1<<" is " << 1<<endl;
  	long fac=1, i=1;
  	do								//Ê¹ÓÃdo-whileÑ­»·
	{  fac *= ++i;
    	  cout << "Factorial numbers of "<<i<<" is " << fac<<endl;
	} while (fac < limits);
  	return 0;
}
