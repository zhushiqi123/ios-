#include <iostream>
#include "9_9.h"
#include "9_9.cpp"
using namespace std;

void RemoveDuplicates(LinkedList<int> & L)
{	int currPos,currValue; 	//当前表位置和数据值
	L.Reset();				//指针指向表头
	while(!L.EndOfList())	//遍历链表
	{	currValue=L.Data();	//记录当前节点的数据值
		currPos=L.CurrentPosition();	//记录当前节点的位置
		L.Next();						//移到下一个节点
		while(! L.EndOfList())			//移到表尾，删除所有具有CurrValue的结点
			if(L.Data()==currValue) L.DeleteAt();//删除结点，当前位置为下一个结点
			else		L.Next();					//移到下一个结点
		L.Reset(currPos); 		//重置链表，移动到第一个结点
		L.Next();				//移到下一个结点
	}
}
