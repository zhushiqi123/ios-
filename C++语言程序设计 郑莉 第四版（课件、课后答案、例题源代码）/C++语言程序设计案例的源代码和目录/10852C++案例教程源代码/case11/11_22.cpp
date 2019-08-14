#include <iostream> 
#include <iomanip> 
using namespace std; 
ostream &setup(ostream &stream) //自定义输出操纵符setup
{	stream.setf(ios::left); stream << setw(10) << setfill('$'); 	return stream; } 
istream &prompt(istream &stream) //自定义输入操纵符prompt
{ 	cin >> hex; 	cout << "Enter number using hex format: "; 	return stream; } 
int main() 
{ 	int i; 	cin >> prompt >> i; 
	cout << i << 10 << " " << setup << 10; 
	return 0; 
}
