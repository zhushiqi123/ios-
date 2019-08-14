#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{	vector<string> StrVector;	//为字符串创建空的向量
	StrVector.reserve(5);	//为五个元素分配向量存储空间
	//将字符串压入向量容器
	StrVector.push_back("Hello,");	StrVector.push_back("What");
	StrVector.push_back("is");		StrVector.push_back("This");
	StrVector.push_back("?");
	//输出向量容器中的元素，通过空格隔开
	copy (StrVector.begin(), StrVector.end(),ostream_iterator<string>(cout," "));
	//输出向量容器的信息
	cout << "\n max_size(): " << StrVector.max_size() << "\n size(): " << StrVector.size() << "\n capacity(): " << StrVector.capacity() << endl;
	swap (StrVector[1], StrVector [3]); //交换第二个和第四个元素
	//在元素"?"前插入字符串 "there" 
	StrVector.insert (find(StrVector.begin(),StrVector.end(),"?"),"there");
	StrVector.back() = "!";	//将最后一个元素设置为"!"
	//输出向量容器中的元素，通过空格隔开
	copy (StrVector.begin(), StrVector.end(),ostream_iterator<string>(cout," "));
	//输出向量容器的信息
	cout << "\n max_size(): " << StrVector.max_size() << "\n size(): " << StrVector.size()<< "\n capacity(): " << StrVector.capacity() << endl;
	return 0;
}
