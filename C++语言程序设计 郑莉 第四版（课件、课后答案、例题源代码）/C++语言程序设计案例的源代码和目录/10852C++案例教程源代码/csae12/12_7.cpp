#include <iostream> 
using namespace std; 
class Base {}; 
class Derived: public Base {}; 
int main() 
{	Derived derived; 
	try   {  throw derived;   } 
	catch(Base b) {  cout << "Caught a base class.\n";   }	//���1:��׽�����쳣��ǰ
	catch(Derived d) { cout << "Caught a Derived class.\n"; }//���2:��׽�������쳣�ں�
	return 0; 
}
