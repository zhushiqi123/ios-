#include <iostream> 
using namespace std; 
template <class T> class ZRFClass 
{	T x; 
public: 
	ZRFClass(T a) {   cout << "Inside generic ZRFClass\n";     x = a;   } 
	T getx() { return x; } 
}; 
template <> class ZRFClass<int>  //Ϊ����int��ʽ�ػ�.
{	int x; 
public: 
	ZRFClass(int a) { cout << "Inside ZRFClass<int> specialization\n";     x = a * a;   } 
	int getx() { return x; } 
}; 
int main() 
{	ZRFClass<double> d(20.20); 
	cout << "double: " << d.getx() << "\n "; 
	ZRFClass<int> i(60); //ʹ����ʽ�ػ�ģ����
	cout << "int: " << i.getx() << "\n"; 
	return 0; 
}
