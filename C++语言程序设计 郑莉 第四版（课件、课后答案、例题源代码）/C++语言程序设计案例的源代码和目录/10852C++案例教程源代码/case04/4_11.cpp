#include <iostream>
using namespace std;
class Ratio
{ 	int num, den;
   public:
      Ratio() 		{ cout << "Constructor called.\n";}
      Ratio(Ratio &r) 	{ cout << "Copy constructor called.\n"; }
      ~Ratio()  		{ cout << "Destructor called.\n"; }
};
int main()
{	Ratio x;                     		// x��������ʼ
	{ Ratio y;                     	// y��������ʼ
		 cout << "Now y is alive.\n";
	}                                 // y�������������������������1��
	cout << "Now between blocks.\n";
	{ Ratio z(x);					// z��������ʼ
		 cout << "Now z is alive.\n";
	}								// z�������������������������1��
	return 0;
}									// x�������������������������1��