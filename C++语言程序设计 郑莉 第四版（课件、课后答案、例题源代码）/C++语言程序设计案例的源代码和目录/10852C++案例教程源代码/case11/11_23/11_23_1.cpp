#include <iostream>
#include <fstream> 
using namespace std; 
int main() 
{	ofstream ofile("test"); 		//创建test文件，并以文本输出方式打开
	if(!ofile) 	{ 	cout << "Cannot open file.\n"; 		return 1;	} 
	ofile << 10 << " " << 123.23 << "\n"; //输出到文件
	ofile << "This program is designed by zrf and ssh!."; 
	ofile.close(); 				//关闭文件
	return 0; 
}

