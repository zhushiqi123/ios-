#include <iostream> 
using namespace std; 
class FunClass 
{	static int count; 					 //��̬���ݳ�Ա����
public: 
	FunClass() { count++;    cout << "Constructing object " <<count << endl;   } 
	~FunClass() { cout << "Destroying object " << count << endl;     count--;   } 
	static int GetCount() { return count; } //��̬������Ա
}; 
int FunClass::count; 					 //��̬���ݳ�Ա����
int main() 
{	FunClass a, b, c; 
	cout << "From Class, there are now " << FunClass::GetCount() << " in existence.\n"; 
	cout << "From Object, there are now " << a.GetCount() <<" in existence.\n"; 
	return 0; 
}
