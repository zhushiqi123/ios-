#include <iostream>
#include <cstring> 
using namespace std;
int main()
{	char str[] = "This is a string with 7 tokens";
	char *tokenPtr;
	cout << "The string to be tokenized is:\n" << str << "\nThe tokens are:\n";
	tokenPtr = strtok( str, " " );   //����ַ���str
	while ( tokenPtr != NULL )       //������һ�����ֱ�� tokenPtr��Ϊ NULL
	{	cout << tokenPtr << '\n';	tokenPtr = strtok( NULL, " " );}  //��ȡ��һ����� 
	cout << "After strtok, str = " << str << endl;
	return 0; 
}
