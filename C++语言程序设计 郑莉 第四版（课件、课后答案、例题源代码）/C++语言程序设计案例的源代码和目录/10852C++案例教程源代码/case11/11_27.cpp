#include <iostream>
#include <fstream>
using namespace std;
void main()
{	char ch;
	fstream file;	file.open("zrf.dat",ios::out|ios::in|ios::binary);
	if  (!file)	{	cout << "can not open zrf.dat"<< endl; abort(); }
	for(int i=1;i<3;i++)
	{	file<<i;
		//����ļ�ָ��λ��
		cout  << "During inputing, the input position is:"<<file.tellp()<<endl;
	}
	file.seekg(0,ios::beg);		//��λ���ļ�ͷ
	while  (!file.eof())
	{	file.get(ch);
		//����ļ�ָ��λ��
		cout  << "During outputing, the output position is:" << file.tellg()<<endl;
	}
}
