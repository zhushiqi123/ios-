// 5_7_1.cpp 
#include <iostream> 
using namespace std; 
int Average(int i); 
void reset(); 
int main() 
{	int num; 					//局部变量，具有动态生存期
	do 
	{	cout << "Enter numbers (-1 to quit, -2 to reset): ";  cin >> num; 
		if(num == -2) { reset();  continue;  } 
		if(num != -1) cout << "Running average is: " << Average(num); 
		cout << endl; 
	} while(num != -1); 
	return 0; 
}
