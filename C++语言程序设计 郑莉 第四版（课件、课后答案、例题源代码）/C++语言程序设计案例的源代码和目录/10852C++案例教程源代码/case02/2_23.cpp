#include <iostream>
using namespace std;
int main()
{	int i1, i2, i3;
	cout << "Enter three integers: ";  cin >> i1 >> i2 >> i3;
	if (i1 >= i2 >= i3) 
     cout << "max = " << i1<<endl;  		//布尔表达式引起逻辑错误
	return 0;
}
