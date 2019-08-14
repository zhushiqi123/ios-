#include <iostream>
#include "9_9.h"
#include "9_9.cpp"
using namespace std;

void FindMax(LinkedList<int> & L)
{	if(L.ListEmpty())	{cerr<<"FindMax:List empty!"<<endl;	return; }//�жϱ��Ƿ�Ϊ��
	L.Reset();	//����ָ�뵽��ͷ
	T max=L.Data();
	int maxLoc=0; 	//��λ��0��ֵ��Ϊ��ǰ���ֵ
	for(L.Next();L.EndOfList();L.Next())	//ɨ����������
		if(L.Data()>max)
		{	max=L.Data();	//��¼�µ����ֵ
			maxLoc=L.CurrentPosition();//��¼���ֵ�ڱ��е�λ��
		}
		L.Reset(maxLoc); //��ָ��ָ�����ֵ
}
void MaxSort(LinkedList<int> & L)
{	LinkedList<int> K;
	while(!L.ListEmpty())//�жϵ�ǰ���Ƿ�Ϊ��
	{ 	FinMax(L); 	//��ʣ��Ԫ���������ֵ
		K.InsertFront(L.Data());//�����ֵ�������K 
		L.DeleteAt();//�����ֵ���ӱ�L��ɾ��
	}
	L.Reset();	K.Reset();//����ָ�뵽��ͷ
	for(K.Next();K.EndOfList();K.Next())	//���ź�������K���Ƶ�L��ͬʱɾ��K�нڵ�
		if(!K.ListEmpty())
		{	L.InsertFront(K.Data());	
			K.DeleteAt();
		}
}
