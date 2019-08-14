#include <iostream>
#include <fstream>
using namespace std;
void main()
{	char ch;
	fstream file;	file.open("zrf.dat",ios::out|ios::in|ios::binary);
	if  (!file)	{	cout << "can not open zrf.dat"<< endl; abort(); }
	for(int i=1;i<3;i++)
	{	file<<i;
		//输出文件指针位置
		cout  << "During inputing, the input position is:"<<file.tellp()<<endl;
	}
	file.seekg(0,ios::beg);		//定位到文件头
	while  (!file.eof())
	{	file.get(ch);
		//输出文件指针位置
		cout  << "During outputing, the output position is:" << file.tellg()<<endl;
	}
}
