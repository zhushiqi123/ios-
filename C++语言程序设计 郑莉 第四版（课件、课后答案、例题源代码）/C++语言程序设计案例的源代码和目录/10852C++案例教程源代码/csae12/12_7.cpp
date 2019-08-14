#include <iostream> 
using namespace std; 
class Base {}; 
class Derived: public Base {}; 
int main() 
{	Derived derived; 
	try   {  throw derived;   } 
	catch(Base b) {  cout << "Caught a base class.\n";   }	//语句1:捕捉基类异常在前
	catch(Derived d) { cout << "Caught a Derived class.\n"; }//语句2:捕捉派生类异常在后
	return 0; 
}
