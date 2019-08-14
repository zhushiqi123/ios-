#include <iostream>
#include <cstring> 
using namespace std;
int main()
{	char str[] = "This is a string with 7 tokens";
	char *tokenPtr;
	cout << "The string to be tokenized is:\n" << str << "\nThe tokens are:\n";
	tokenPtr = strtok( str, " " );   //标记字符串str
	while ( tokenPtr != NULL )       //查找下一个标记直到 tokenPtr变为 NULL
	{	cout << tokenPtr << '\n';	tokenPtr = strtok( NULL, " " );}  //获取下一个标记 
	cout << "After strtok, str = " << str << endl;
	return 0; 
}
