#include <iostream> 
#include <fstream> 
using namespace std; 
int main() 
{ 	int n[5] = {1, 2, 3, 4, 5}; 	register int i; 
	ofstream ofile("test.bin", ios::out | ios::binary); 	//以二进制方式打开文件
	if(!ofile) 	{ 	cout << "Cannot open file.\n"; 	return 1; 	} 
	ofile.write((char *) &n, sizeof n); //向文件写数据块
	ofile.close(); 
	for(i=0; i<5; i++) 		n[i] = 0; 
	ifstream ifile("test.bin", ios::in | ios::binary); 	//以二进制方式打开文件
	if(!ifile) 	{ 	cout << "Cannot open file.\n"; 		return 1; 	} 
	ifile.read((char *) &n, sizeof n); 
	for(i=0; i<5; i++) 		cout << n[i] << " "; 	//从文件中读数据
	ifile.close(); 
	return 0; 
}
