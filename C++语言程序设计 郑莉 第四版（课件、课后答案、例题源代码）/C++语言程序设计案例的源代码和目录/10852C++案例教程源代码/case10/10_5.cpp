#include <iostream> 
#include <utility> //��������pairͷ�ļ�
#include <vector>  
#include <list>  
#include <iterator> 
using namespace std;  
int main()
{	vector<int> iVector(4);						//��������
	iVector.push_back(2);iVector.push_back(4);
	iVector.push_back(6);iVector.push_back(8);
	list<int> iList(4);							//�б�����
	iList.push_back(2);iList.push_back(4);
	iList.push_back(7);iList.push_back(8);
	pair<vector<int>::iterator,list<int>::iterator>	//ʹ�ö���pair����Ϊ��������
	p1=mismatch(iVector.begin(),iVector.end(),iList.begin(),greater_equal<int>());
	cout<<"A mismatch occurs at the pair"<<endl;
	cout<<"iVector value="<<*p1.first<<" and "<<"iList value="<<*p1.second<<endl;
	return 0;
}
