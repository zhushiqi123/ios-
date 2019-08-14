#include <iostream>
#include <iomanip>
using namespace std;
class PhoneNumber 
{
     //����������������������Ҫʹ��cout << somePhoneNumber;��������Ϊ��Ա����
	friend ostream &operator<<( ostream &output, const PhoneNumber &num )
	{   output << "(" << num.areaCode << ") "<< num.exchange << "-" << num.line;
		return output;    
	}    
	//��������������������ʹ��cin >> somePhoneNumber;��������Ϊ��Ա����
	friend istream &operator>>( istream &input, PhoneNumber &num )
	{	input.ignore(); input >> setw( 4 ) >> num.areaCode; 
		input.ignore( 2 ); input >> setw( 4 ) >> num.exchange; 
		input.ignore(); input >> setw( 5 ) >> num.line;  
		return input;     
	} 
private:
   char areaCode[4],exchange[4],line[5];    
}; 
int main()
{  PhoneNumber phone; 	//��������phone
   cout << "Enter phone number in the form (123) 456-7890: ";
   cin >> phone;			//���1��ʹ������ȡ�����
  cout << "The phone number entered was: "<< phone << endl;//���2��ʹ�������������
   return 0;
}
