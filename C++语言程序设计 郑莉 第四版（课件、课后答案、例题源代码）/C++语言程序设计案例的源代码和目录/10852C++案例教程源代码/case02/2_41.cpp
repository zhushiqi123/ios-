#include <iostream>
using namespace std ;
enum weekday									//����ö������
{ 	Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}; 
int main()
{	int  i;
	weekday week1 = Thursday;
	cout << "week1 = " << week1 << endl;	i = week1;  	//ö�����͸�ֵ��int����
	cout << "i = " << i << endl;
	enum weekday week2, week3;
	week2 = (weekday)6; 							//int��ǿ������ת��Ϊö������
	cout << "week2 = " << week2 << endl;
	week3 = weekday(4);							//int��ǿ������ת��Ϊö������
	cout << "week3 = " << week3 << endl;
	return 0;
}
