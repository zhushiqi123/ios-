#include <iostream>
using namespace std;
int IntNum()
{	char ch;  int n;
	while (cin.get(ch)) //字符是数字，放回cin流中使其可以作为完整整数读入
		if (ch >= '0' && ch <= '9') {  cin.putback(ch);   cin >> n;    break;      }
	return n;
}
int main()
{	int m = IntNum(), n = IntNum();
	cin.ignore(80,'\n');               //忽略输入行的其余部分
	cout << m << " + " << n << " = " << m+n << endl;
	return 0;
}
