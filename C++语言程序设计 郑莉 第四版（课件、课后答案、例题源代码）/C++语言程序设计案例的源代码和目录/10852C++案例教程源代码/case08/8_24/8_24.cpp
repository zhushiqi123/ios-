#include <iostream>
#include "MiniComplex.h"
using namespace std;
int main()
{	MiniComplex num1(23,34), num2(56,35);
	cout<<"Initial Value of Num1 = "<<num1<<"\nInitial Value of Num2 = "<<num2<<endl;
	cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;//ʹ�����صļӺ������
	cout<<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;//ʹ�����صļ��������
	cout<<num1<<" * "<<num2<<" = "<<num1 * num2<<endl;//ʹ�����صĳ˺������
	cout<<num1<<" / "<<num2<<" = "<<num1 / num2<<endl;//ʹ�����صĳ��������
	return 0;	
}
