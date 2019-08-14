#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{	map<string,float> stocks; 			//创建空的映射容器：键值为字符型，数值为浮点型
	stocks["AAA"] = 363.50;	stocks["BBB"] = 523.50;	//向容器插入元素
	map<string,float>::iterator pos;		//声明指向映射容器的迭代器
	for (pos = stocks.begin(); pos != stocks.end(); ++pos) 
	{	cout << "stock: " << pos->first << "\t"<< "price: " << pos->second << endl;	}
	for (pos = stocks.begin(); pos != stocks.end(); ++pos) 	
   {pos->second *= 2; }					//price加倍
	for (pos = stocks.begin(); pos != stocks.end(); ++pos) 
	{	cout << "stock: " << pos->first << "\t"<< "price: " << pos->second << endl;	}
	stocks["VVV"] = stocks["BBB"];		//将键值名称"BBB"改为"VVV"
	stocks.erase("BBB");
	for (pos = stocks.begin(); pos != stocks.end(); ++pos) 
	{	cout << "stock: " << pos->first << "\t"<< "price: " << pos->second << endl;	}
	return 0;
}
