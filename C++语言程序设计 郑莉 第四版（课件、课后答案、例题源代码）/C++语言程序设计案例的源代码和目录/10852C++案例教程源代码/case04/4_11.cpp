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
{	Ratio x;                     		// x的作用域开始
	{ Ratio y;                     	// y的作用域开始
		 cout << "Now y is alive.\n";
	}                                 // y的作用域结束，调用析构函数1次
	cout << "Now between blocks.\n";
	{ Ratio z(x);					// z的作用域开始
		 cout << "Now z is alive.\n";
	}								// z的作用域结束，调用析构函数1次
	return 0;
}									// x的作用域结束，调用析构函数1次