#include <iostream>
using namespace std;
int main()
{	int ch; 
	cout << "Before input, cin.eof() is "<<cin.eof()<< endl;//���1�����cin.eof()��ֵ
	cout << "Input a sentence: "<< endl;
	while ((ch = cin.get())!= EOF)  cout.put(ch);//���2��ʹ��get�� put����ȡ��ʾ�ַ�
	cout << "EOF in this system is: " << ch << endl;
	cout << "After input, cin.eof() is:"<< cin.eof()<<endl;//���3�����cin.eof()
	return 0;
}
