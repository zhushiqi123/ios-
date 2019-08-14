#ifndef LINKSTACK_CLASS
#define LINKSTACK_CLASS
#include <iostream>
#include <cstdlib>
using namespace std;
#include "link.h"
template <class T>
class LinkStack
{    LinkedList<T> StackList;   	//用于存放栈的链表对象
public:
     LinkStack(void); 			//构造函数
     void Push(const T& item);  	//入栈
     T Pop(void);				//出栈
     void ClearStack(void);		//清空栈
     T Peek(void) ;        	//访问栈顶元素
     int StackEmpty(void) const;	//监测栈是否为空
};
template <class T>				//构造函数
LinkStack<T>::LinkStack(void) {}
template <class T>				//链表类成员函数ListEmpty测试栈空否
int LinkStack<T>::StackEmpty(void) const{    return StackList.ListEmpty();}
template <class T>				//链表类成员函数ClearList清空栈
void LinkStack<T>::ClearStack(void){    StackList.ClearList();}
template <class T>				//链表类成员函数InsertFront在栈顶插入一项
void LinkStack<T>::Push(const T& item){   StackList.InsertFront(item);}
template <class T>				//返回栈首元素的数值
T LinkStack<T>::Pop(void)
{	T tmp;
	if (StackList.ListEmpty())	//测试栈空否,若空则中止
    {   cerr << "Calling QFront for an empty queue!" << endl;        exit(1); }
    StackList.Reset();			//重新设置栈头并返回其值
	tmp=StackList.Data();		//将顶元素赋给tmp
	StackList.DeleteFront();		//删除顶元素
    return tmp;  				//返回顶元素
}
template <class T>				//返回栈顶元素的数值
T LinkStack<T>::Peek(void)
{   if (StackList.ListEmpty())	//测试栈空否,若空则终止
    {   cerr << "Calling QFront for an empty queue!" << endl;        exit(1);    }
    StackList.Reset();       	//重新设置栈顶并返回其值
    return StackList.Data();
}
#endif