#include <iostream>
using namespace std;
int IntNum()
{	char ch;  int n;
	while (cin.get(ch)) //�ַ������֣��Ż�cin����ʹ�������Ϊ������������
		if (ch >= '0' && ch <= '9') {  cin.putback(ch);   cin >> n;    break;      }
	return n;
}
int main()
{	int m = IntNum(), n = IntNum();
	cin.ignore(80,'\n');               //���������е����ಿ��
	cout << m << " + " << n << " = " << m+n << endl;
	return 0;
}
