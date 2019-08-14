#include <iostream>
#include <iomanip>
using namespace std;
class PhoneNumber 
{
     //重载流插入操作符，如果需要使用cout << somePhoneNumber;则不能重载为成员函数
	friend ostream &operator<<( ostream &output, const PhoneNumber &num )
	{   output << "(" << num.areaCode << ") "<< num.exchange << "-" << num.line;
		return output;    
	}    
	//重载流插入操作符，如果使用cin >> somePhoneNumber;则不能重载为成员函数
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
{  PhoneNumber phone; 	//创建对象phone
   cout << "Enter phone number in the form (123) 456-7890: ";
   cin >> phone;			//语句1：使用流提取运算符
  cout << "The phone number entered was: "<< phone << endl;//语句2：使用流插入运算符
   return 0;
}
