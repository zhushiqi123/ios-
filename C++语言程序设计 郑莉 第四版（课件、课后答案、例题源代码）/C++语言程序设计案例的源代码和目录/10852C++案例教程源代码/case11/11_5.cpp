#include <iostream>
using namespace std;
int main()
{	int ch; 
	cout << "Before input, cin.eof() is "<<cin.eof()<< endl;//语句1：输出cin.eof()的值
	cout << "Input a sentence: "<< endl;
	while ((ch = cin.get())!= EOF)  cout.put(ch);//语句2：使用get和 put来读取显示字符
	cout << "EOF in this system is: " << ch << endl;
	cout << "After input, cin.eof() is:"<< cin.eof()<<endl;//语句3：输出cin.eof()
	return 0;
}
