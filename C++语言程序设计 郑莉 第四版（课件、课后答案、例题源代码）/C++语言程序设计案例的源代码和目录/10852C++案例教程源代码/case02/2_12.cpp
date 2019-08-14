#include <iostream>
using namespace std;
int main()     
{   cout << "20&10=" << (20&10) << endl;		//按位与运算
    cout << "20^10=" << (20^10) << endl;		//按位异或运算
    cout << "20|10=" << (20|10) << endl;		//按位或运算
    cout << "~20=" <<(~20) << endl;		        //按位取反运算
    cout << "20<<3=" << (20<<3) << endl;		//左移位运算
    cout << "-20<<3=" << (-20<<3) << endl;		//左移位运算
    cout << "20>>3=" << (20>>3) << endl;		//右移位运算
    cout << "-20>>3=" << (-20>>3) << endl;		//右移位运算
	return 0;
}
