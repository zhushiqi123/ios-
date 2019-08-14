#include <iostream>
#include "9_9.h"
#include "9_9.cpp"
using namespace std;
template<class T>
void ConcatLists(LinkedList<T>& L1,LinkedList<T>& L2) //将L2连到L1的表尾
{   L1.Reset();  L2.Reset();		//重置表指针到表头
    while(!L2.EndOfList())			//遍历L2，并每个数据值插入到L1的表尾
    {	L1.InsertRear(L2.Data());		
         L2.Next();    
		}
}
