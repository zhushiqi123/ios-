#include <iostream>
#include <string>
using namespace std;
int main()
{	//将所有部分连接成一个字符串
	string str( "The values in any left subtree" "\nare less than the value in the"
				"\nparent node and the values in" "\nany right subtree are greater"
				"\nthan the value in the parent node" );
	cout << "Original string:\n" << str << endl << endl;
	str.erase( 62 ); 			//语句1：移除所有从位置62开始到字符串str结束的字符
	cout << "Original string after erase:\n" << str << "\nAfter first replacement:\n";
	int position = str.find( " " ); 					//语句2：查找空格
	while ( position != string::npos ) 
	{	str.replace( position, 1, "." ); 			//语句3：使用replace函数
		position = str.find( " ", position + 1 ); 	//语句4：使用find函数
	}
	cout << str << "\nAfter second replacement:\n";
	position = str.find( "." );						//语句5：查找句点
	while ( position != string::npos ) 
	{	str.replace( position, 2, "xxxxx;;yyy", 5, 2 ); //语句6：使用replace函数
		position = str.find( ".", position + 1 );
	} 
	cout << str << endl;
	return 0;
}
