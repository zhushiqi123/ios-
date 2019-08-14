#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{	long n;
	cout << "Enter a positive integer: ";  cin >> n;
	if (n < 2)
      cout << n << " is not prime." << endl;
	else if (n < 4)
      cout << n << " is prime." << endl;
	else if (n%2 == 0)
      cout << n << " = 2*" << n/2 << endl;
	else
	{	for (int i=3; i <= n/2; i += 2)								//²½³¤Îª2
		  if (n%i == 0)  
        {cout << n << " = " << i << "*" << n/i << endl;  exit(0);} 
		cout << n << " is prime." << endl;
	}
	return 0;
}
