#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <deque>
#include <vector>
using namespace std;
int main()
{	list<string> sList;	vector<string> sVect;	deque<string> sDeq;
sList.insert(sList.end(), "Red");	sList.insert(sList.end(), "Green");
	sList.insert(sList.end(), "Yellow");
	sVect.insert(sVect.end(), "Red");	sVect.insert(sVect.end(), "Green");
	sVect.insert(sVect.end(), "Yellow");	sVect.insert(sVect.end(), "White");
	sDeq.insert(sDeq.end(), "Red");	sDeq.insert(sDeq.end(), "White");
	if (equal(sList.begin(), sList.end(),sVect.begin()))//使用通用算法equal
		cout<<"The content in sList is equal to sVect"<<endl;
	if (!equal(sDeq.begin(), sDeq.end(),sList.begin()))	//使用通用算法equal
		cout<<"The content in sDeq is not equal to sList"<<endl;
	pair<deque<string>::iterator, list<string>::iterator>
		pair1 = mismatch(sDeq.begin(), sDeq.end(),sList.begin());//使用通用算法mismatch
	if (pair1.first != sDeq.end())
		cout << "First disagreement in sDeq and sList:  "<< *(pair1.first) 
		<< " and " << *(pair1.second)<< endl;
	return 0;
}
