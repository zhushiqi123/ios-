#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{	map<string,float> stocks; 			//�����յ�ӳ����������ֵΪ�ַ��ͣ���ֵΪ������
	stocks["AAA"] = 363.50;	stocks["BBB"] = 523.50;	//����������Ԫ��
	map<string,float>::iterator pos;		//����ָ��ӳ�������ĵ�����
	for (pos = stocks.begin(); pos != stocks.end(); ++pos) 
	{	cout << "stock: " << pos->first << "\t"<< "price: " << pos->second << endl;	}
	for (pos = stocks.begin(); pos != stocks.end(); ++pos) 	
   {pos->second *= 2; }					//price�ӱ�
	for (pos = stocks.begin(); pos != stocks.end(); ++pos) 
	{	cout << "stock: " << pos->first << "\t"<< "price: " << pos->second << endl;	}
	stocks["VVV"] = stocks["BBB"];		//����ֵ����"BBB"��Ϊ"VVV"
	stocks.erase("BBB");
	for (pos = stocks.begin(); pos != stocks.end(); ++pos) 
	{	cout << "stock: " << pos->first << "\t"<< "price: " << pos->second << endl;	}
	return 0;
}
