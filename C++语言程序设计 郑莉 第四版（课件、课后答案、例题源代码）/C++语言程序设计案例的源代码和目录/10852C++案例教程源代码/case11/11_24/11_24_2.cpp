// ʹ��put() д�ļ�
#include <iostream> 
#include <fstream> 
using namespace std; 
int main() 
{ 	char *p = "hello world\n"; 
	ofstream ofile("test", ios::out | ios::binary); //�Զ����Ʒ�ʽ���ļ�
	if(!ofile) 	{ 	cout << "Cannot open file.\n"; 		return 1; 	} 
	while(*p) ofile.put(*p++);   //ʹ��put()�������ļ�дһ���ַ������������ַ�ת��
	ofile.close(); 
	return 0; 
}
