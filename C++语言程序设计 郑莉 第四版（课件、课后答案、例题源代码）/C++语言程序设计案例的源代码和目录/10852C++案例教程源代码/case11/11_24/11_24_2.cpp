// 使用put() 写文件
#include <iostream> 
#include <fstream> 
using namespace std; 
int main() 
{ 	char *p = "hello world\n"; 
	ofstream ofile("test", ios::out | ios::binary); //以二进制方式打开文件
	if(!ofile) 	{ 	cout << "Cannot open file.\n"; 		return 1; 	} 
	while(*p) ofile.put(*p++);   //使用put()函数向文件写一个字符串，不发生字符转换
	ofile.close(); 
	return 0; 
}
