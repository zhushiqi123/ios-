#include <iostream>
#include <algorithm>  //heap�㷨
#include <vector>
using namespace std;
int main()
{	int iarray[9]={0,1,2,3,4,8,9,3,5};	vector<int> iheap(iarray,iarray+9);
	make_heap(iheap.begin(),iheap.end());	//����һ����
	for(int i=0; i<iheap.size(); ++i)		cout<<iheap[i]<<' '; 
	cout<<endl;
	iheap.push_back(7); //��һ��Ԫ��ѹ���
	push_heap(iheap.begin(),iheap.end());
	for(int j=0; j<iheap.size(); ++j)		cout<<iheap[j]<<' '; 
	cout<<endl;
	pop_heap(iheap.begin(),iheap.end());	//�Ӷ���ȡ��һ��Ԫ��
	cout<<iheap.back()<<endl;   //���ص��ǲ�û������ɾ��.
	iheap.pop_back();           //ͨ����Ա����ɾ�����Ԫ�أ�û�з��ء�
	for(int k=0;k<iheap.size();++k)		cout<<iheap[k]<<' '; 
	cout<<endl;	
	//�Զ���Ԫ�ؽ�������
	sort_heap(iheap.begin(),iheap.end());
	for(int l=0;l<iheap.size();++l)		cout<<iheap[l]<<' '; 
	return 0;
}
