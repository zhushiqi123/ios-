#include <iostream>
#include "9_9.h"
#include "9_9.cpp"
using namespace std;

void RemoveDuplicates(LinkedList<int> & L)
{	int currPos,currValue; 	//��ǰ��λ�ú�����ֵ
	L.Reset();				//ָ��ָ���ͷ
	while(!L.EndOfList())	//��������
	{	currValue=L.Data();	//��¼��ǰ�ڵ������ֵ
		currPos=L.CurrentPosition();	//��¼��ǰ�ڵ��λ��
		L.Next();						//�Ƶ���һ���ڵ�
		while(! L.EndOfList())			//�Ƶ���β��ɾ�����о���CurrValue�Ľ��
			if(L.Data()==currValue) L.DeleteAt();//ɾ����㣬��ǰλ��Ϊ��һ�����
			else		L.Next();					//�Ƶ���һ�����
		L.Reset(currPos); 		//���������ƶ�����һ�����
		L.Next();				//�Ƶ���һ�����
	}
}
