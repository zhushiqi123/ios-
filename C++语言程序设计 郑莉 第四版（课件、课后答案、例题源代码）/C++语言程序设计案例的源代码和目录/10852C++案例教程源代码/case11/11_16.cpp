#include <iostream>
using namespace std;
int main()
{  bool boolValue = true; 
   cout << "boolValue is " << boolValue << endl; //语句1：显示默认布尔值真
   cout << "boolValue (after using boolalpha) is "
        << boolalpha << boolValue << endl ; 	//语句2：使用 boolalpha后显示布尔值
   cout << "switch boolValue and use noboolalpha" << endl;
   boolValue = false; 							//改变boolValue
   cout << noboolalpha << endl;					//语句3：使用noboolalpha
   cout << "boolValue is " << boolValue << endl;   //使用noboolalpha后显示boolValue
   //重新使用boolalpha
   cout << "boolValue (after using boolalpha) is "<< boolalpha << boolValue << endl;
   return 0;
}
