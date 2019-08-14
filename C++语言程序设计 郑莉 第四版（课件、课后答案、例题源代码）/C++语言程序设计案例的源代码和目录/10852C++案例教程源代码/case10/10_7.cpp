#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;
int main()
{	deque<string> StrDeque; 				//为字符串创建空的双端队列容器
	StrDeque.assign (2, string("middle"));		//向容器中插入2个元素
	StrDeque.push_back ("This is last string");	//向容器后部插入字符串
	StrDeque.push_front ("This is first string");	//向容器前端插入字符串
	copy (StrDeque.begin(), StrDeque.end(),	ostream_iterator<string>(cout,"\n"));
	StrDeque.pop_front();					//移除第一个元素
	StrDeque.pop_back();					//移除最后一个元素
	//将字符串''another'' 插入到除了第一个的位置
	for (int i=1; i<StrDeque.size(); ++i) {StrDeque[i] = "another " + StrDeque [i]; }
	StrDeque.resize (3, "Resized string");		//重新设置容器大小
	copy (StrDeque.begin(), StrDeque.end(),ostream_iterator<string>(cout,"\n"));
	return 0;
}
