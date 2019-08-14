#include <iostream>
#include "9_9.h"
#include "9_9.cpp"
using namespace std;

void FindMax(LinkedList<int> & L)
{	if(L.ListEmpty())	{cerr<<"FindMax:List empty!"<<endl;	return; }//判断表是否为空
	L.Reset();	//重置指针到表头
	T max=L.Data();
	int maxLoc=0; 	//将位置0的值置为当前最大值
	for(L.Next();L.EndOfList();L.Next())	//扫描整个链表
		if(L.Data()>max)
		{	max=L.Data();	//记录新的最大值
			maxLoc=L.CurrentPosition();//记录最大值在表中的位置
		}
		L.Reset(maxLoc); //将指针指向最大值
}
void MaxSort(LinkedList<int> & L)
{	LinkedList<int> K;
	while(!L.ListEmpty())//判断当前表是否为空
	{ 	FinMax(L); 	//在剩余元素中求最大值
		K.InsertFront(L.Data());//将最大值结点插入表K 
		L.DeleteAt();//将最大值结点从表L中删除
	}
	L.Reset();	K.Reset();//重置指针到表头
	for(K.Next();K.EndOfList();K.Next())	//将排好序链表K复制到L，同时删除K中节点
		if(!K.ListEmpty())
		{	L.InsertFront(K.Data());	
			K.DeleteAt();
		}
}
