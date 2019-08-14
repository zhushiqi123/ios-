#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;
int main()
{	char cList[10]={'a','i','C','d','e','f','o','H','u','j'};
	vector <char> charList(cList,cList+10);		vector <char>::iterator position;
	position=find(charList.begin(),charList.end(),'d');//使用通用算法find
	cout<<"The 'd' is located in:"<<position-charList.begin()<<endl;
	position=find_if(charList.begin(),charList.end(),isupper);//使用通用算法find_if
	cout<<"The first upper letter is:"<<*position<<endl;
	int list1[10]={12,34,56,21,34,78,34,56,12,25};
	int list2[2]={34,56}, list3[5]={33,48,21,34,73};
	vector<int>::iterator location;
	location=find_end(list1,list1+10,list2,list2+2);//使用通用算法find_end
	cout<<"The last find is located in:"<<location-list1<<endl;
	location=find_first_of(list1,list1+10,list3,list3+5);//使用通用算法find_first_of
	cout<<"The first find is located in:"<<location-list1<<endl;
  	return 0;
}
