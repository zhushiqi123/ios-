#include <iostream> 
using namespace std; 
int main() 
{	cout << "one\ttwo\tthree\n"; 			//使用水平制表符
	cout << "123\b\b45\n";  			//使用退格符
	cout << "Error\n";   				//输出字符串
	cout << "\x7Error\n";    			//无喇叭声
	cout << "\x7 Error\n";  				//喇叭声    
	return 0; 
}
