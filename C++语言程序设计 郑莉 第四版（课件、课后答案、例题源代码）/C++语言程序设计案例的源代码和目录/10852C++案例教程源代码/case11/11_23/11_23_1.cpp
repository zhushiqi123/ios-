#include <iostream>
#include <fstream> 
using namespace std; 
int main() 
{	ofstream ofile("test"); 		//����test�ļ��������ı������ʽ��
	if(!ofile) 	{ 	cout << "Cannot open file.\n"; 		return 1;	} 
	ofile << 10 << " " << 123.23 << "\n"; //������ļ�
	ofile << "This program is designed by zrf and ssh!."; 
	ofile.close(); 				//�ر��ļ�
	return 0; 
}

