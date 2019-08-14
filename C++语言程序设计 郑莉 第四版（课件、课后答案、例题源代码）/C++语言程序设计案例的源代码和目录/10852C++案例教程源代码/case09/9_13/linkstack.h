#ifndef LINKSTACK_CLASS
#define LINKSTACK_CLASS
#include <iostream>
#include <cstdlib>
using namespace std;
#include "link.h"
template <class T>
class LinkStack
{    LinkedList<T> StackList;   	//���ڴ��ջ���������
public:
     LinkStack(void); 			//���캯��
     void Push(const T& item);  	//��ջ
     T Pop(void);				//��ջ
     void ClearStack(void);		//���ջ
     T Peek(void) ;        	//����ջ��Ԫ��
     int StackEmpty(void) const;	//���ջ�Ƿ�Ϊ��
};
template <class T>				//���캯��
LinkStack<T>::LinkStack(void) {}
template <class T>				//�������Ա����ListEmpty����ջ�շ�
int LinkStack<T>::StackEmpty(void) const{    return StackList.ListEmpty();}
template <class T>				//�������Ա����ClearList���ջ
void LinkStack<T>::ClearStack(void){    StackList.ClearList();}
template <class T>				//�������Ա����InsertFront��ջ������һ��
void LinkStack<T>::Push(const T& item){   StackList.InsertFront(item);}
template <class T>				//����ջ��Ԫ�ص���ֵ
T LinkStack<T>::Pop(void)
{	T tmp;
	if (StackList.ListEmpty())	//����ջ�շ�,��������ֹ
    {   cerr << "Calling QFront for an empty queue!" << endl;        exit(1); }
    StackList.Reset();			//��������ջͷ��������ֵ
	tmp=StackList.Data();		//����Ԫ�ظ���tmp
	StackList.DeleteFront();		//ɾ����Ԫ��
    return tmp;  				//���ض�Ԫ��
}
template <class T>				//����ջ��Ԫ�ص���ֵ
T LinkStack<T>::Peek(void)
{   if (StackList.ListEmpty())	//����ջ�շ�,��������ֹ
    {   cerr << "Calling QFront for an empty queue!" << endl;        exit(1);    }
    StackList.Reset();       	//��������ջ����������ֵ
    return StackList.Data();
}
#endif