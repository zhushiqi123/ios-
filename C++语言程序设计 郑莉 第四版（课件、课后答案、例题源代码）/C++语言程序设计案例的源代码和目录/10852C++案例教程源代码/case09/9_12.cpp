#include <iostream>
#include "9_9.h"
#include "9_9.cpp"
using namespace std;
template<class T>
void ConcatLists(LinkedList<T>& L1,LinkedList<T>& L2) //��L2����L1�ı�β
{   L1.Reset();  L2.Reset();		//���ñ�ָ�뵽��ͷ
    while(!L2.EndOfList())			//����L2����ÿ������ֵ���뵽L1�ı�β
    {	L1.InsertRear(L2.Data());		
         L2.Next();    
		}
}
