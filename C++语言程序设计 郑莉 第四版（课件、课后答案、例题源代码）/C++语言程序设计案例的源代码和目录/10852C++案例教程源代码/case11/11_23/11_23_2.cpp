// Read from file. 
#include <iostream> 
#include <fstream> 
using namespace std; 
int main() 
{	char ch; 	int i; 	float f; 	char str[80]; 
 	ifstream ifile("test"); 		//以文本输出方式打开文件
	if(!ifile) 	{ 	cout << "Cannot open file.\n"; 		return 1; 	} 
	ifile >> i >> f >> ch >> str; 	//读文件
 	cout << i << " " << f << " " << ch << "\n" << str; 
 	ifile.close(); //关闭文件
	return 0; 
}
