#include <iostream>
#include <algorithm>  //heap算法
#include <vector>
using namespace std;
int main()
{	int iarray[9]={0,1,2,3,4,8,9,3,5};	vector<int> iheap(iarray,iarray+9);
	make_heap(iheap.begin(),iheap.end());	//生成一个堆
	for(int i=0; i<iheap.size(); ++i)		cout<<iheap[i]<<' '; 
	cout<<endl;
	iheap.push_back(7); //将一个元素压入堆
	push_heap(iheap.begin(),iheap.end());
	for(int j=0; j<iheap.size(); ++j)		cout<<iheap[j]<<' '; 
	cout<<endl;
	pop_heap(iheap.begin(),iheap.end());	//从堆中取出一个元素
	cout<<iheap.back()<<endl;   //返回但是并没有真正删除.
	iheap.pop_back();           //通过成员函数删除最后元素，没有返回。
	for(int k=0;k<iheap.size();++k)		cout<<iheap[k]<<' '; 
	cout<<endl;	
	//对堆中元素进行排序
	sort_heap(iheap.begin(),iheap.end());
	for(int l=0;l<iheap.size();++l)		cout<<iheap[l]<<' '; 
	return 0;
}
