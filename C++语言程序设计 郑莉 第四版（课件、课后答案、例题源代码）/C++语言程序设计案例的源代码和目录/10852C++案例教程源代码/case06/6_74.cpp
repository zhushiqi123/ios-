#include <iostream>
#include <string>
using namespace std;
int main()
{	//�����в������ӳ�һ���ַ���
	string str( "The values in any left subtree" "\nare less than the value in the"
				"\nparent node and the values in" "\nany right subtree are greater"
				"\nthan the value in the parent node" );
	cout << "Original string:\n" << str << endl << endl;
	str.erase( 62 ); 			//���1���Ƴ����д�λ��62��ʼ���ַ���str�������ַ�
	cout << "Original string after erase:\n" << str << "\nAfter first replacement:\n";
	int position = str.find( " " ); 					//���2�����ҿո�
	while ( position != string::npos ) 
	{	str.replace( position, 1, "." ); 			//���3��ʹ��replace����
		position = str.find( " ", position + 1 ); 	//���4��ʹ��find����
	}
	cout << str << "\nAfter second replacement:\n";
	position = str.find( "." );						//���5�����Ҿ��
	while ( position != string::npos ) 
	{	str.replace( position, 2, "xxxxx;;yyy", 5, 2 ); //���6��ʹ��replace����
		position = str.find( ".", position + 1 );
	} 
	cout << str << endl;
	return 0;
}
