// Read from file. 
#include <iostream> 
#include <fstream> 
using namespace std; 
int main() 
{	char ch; 	int i; 	float f; 	char str[80]; 
 	ifstream ifile("test"); 		//���ı������ʽ���ļ�
	if(!ifile) 	{ 	cout << "Cannot open file.\n"; 		return 1; 	} 
	ifile >> i >> f >> ch >> str; 	//���ļ�
 	cout << i << " " << f << " " << ch << "\n" << str; 
 	ifile.close(); //�ر��ļ�
	return 0; 
}
