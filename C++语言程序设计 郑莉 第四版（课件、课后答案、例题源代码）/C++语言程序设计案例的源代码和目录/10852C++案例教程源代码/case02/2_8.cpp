#include <iostream> 
using namespace std; 
int main() 
{	bool p, q; 
	p = true;   q = true; 
	cout <<p <<" XOR "<<q<<" is "<<( (p || q) && !(p && q) )<< "\n"; //输出异或结果
	p = false;   q = true; 
	cout <<p<<" XOR "<<q<< " is "<<( (p || q) && !(p && q) )<< "\n"; //输出异或结果
	p = true;   q = false; 
	cout <<p<<" XOR "<<q<<" is "<<( (p || q) && !(p && q) )<< "\n"; //输出异或结果
	p = false;   q = false; 
	cout <<p<<" XOR "<<q<<" is "<<( (p || q) && !(p && q) )<< "\n"; //输出异或结果
	return 0; 
}
