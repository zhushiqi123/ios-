//链表类的声明
//链表类的声明
#ifndef LINKEDLIST_CLASS
#define LINKEDLIST_CLASS
#ifndef NULL
const int NULL = 0;
#endif 

template <class T>
class Node
{    Node<T> *next;	//next为指向后继结点的指针
public:
     T data;	//公有数据域
     Node (const T& item, Node<T>* ptrnext = NULL);    //构造函数
     void InsertAfter(Node<T> *p);	//在本结点之后插入一个同类结点p 
     Node<T> *DeleteAfter(void);	//删除本结点的后继结点，并返回其地址
     Node<T> *NextNode(void) const;	 //获取后继结点的地址
};

template <class T>
class LinkedList
{
   private:
   //数据成员：
     Node<T> *front, *rear;	// 表头和表尾指针
     Node<T> *prevPtr, *currPtr;   //记录表当前遍历位置的指针，由插入和删除操作更新
     int size;	// 表中的元素个数
     int position;	//当前元素在表中的位置序号。由函数Reset使用

   //函数成员：
     // 生成新结点，数据域为item，指针域为ptrNext
     Node<T> *GetNode(const T& item,Node<T> *ptrNext=NULL);

     //释放结点
     void FreeNode(Node<T> *p);
     
     // 将链表L 拷贝到当前表（假设当前表为空）。
     // 被拷贝构造函数、operator=调用
     void CopyList(const LinkedList<T>& L);
     
   public:
     LinkedList(void);	// 构造函数
     LinkedList(const LinkedList<T>& L);  //拷贝构造函数
     ~LinkedList(void);	// 析构函数
     LinkedList<T>& operator= (const LinkedList<T>& L); // 重载赋值运算符

     int ListSize(void) const;	//返回链表中元素个数（size）
     int ListEmpty(void) const;	//size等于0时返回TRUE,否则返回FALSE
     
    void Reset(int pos = 0);//将指针currPtr移动到序号为pos的结点，prevPtr相应移动
                            // position记录当前结点的序号
     void Next(void);	//使prevPtr和currPtr移动到下一个结点
     int EndOfList(void) const;	//currPtr等于NULL时返回TRUE,否则返回FALSE
     int CurrentPosition(void) const;	//返回数据成员position
     
     void InsertFront(const T& item);	//在表头插入结点
     void InsertRear(const T& item);	//在表尾添加结点
     void InsertAt(const T& item);	//在当前结点之前插入结点
     void InsertAfter(const T& item);	//在当前结点之后插入结点
     
     T DeleteFront(void);	//删除头结点
     void DeleteAt(void);	//删除当前结点

     T& Data(void);   // 返回对当前结点成员data的引用（使数据域可以被使用或修改）

     // 清空链表：释放所有结点的内存空间。被析构函数、operator= 调用
     void ClearList(void);
};

// 类的实现部分
// 构造函数，初始化数据和指针成员
template <class T>
Node<T>::Node(const T& item, Node<T>* ptrnext) :  data(item), next(ptrnext)
{}
  
// 返回后继结点的指针
template <class T>
Node<T> *Node<T>::NextNode(void) const
{    return next;    } 

// 在当前结点之后插入一个结点p 
template <class T>
void Node<T>::InsertAfter(Node<T> *p)
{
    p->next = next;	//p结点指针域指向当前结点的后继结点
    next = p;	//当前结点的指针域指向p 
}

// 删除当前结点的后继结点，并返回其地址
template <class T>
Node<T> *Node<T>::DeleteAfter(void)
{
Node<T> *tempPtr = next;	//将欲删除的结点地址存储到tempPtr中
    if (next == NULL)	//如果当前结点没有后继结点，则返回NULL
        return NULL;
    next = tempPtr->next;	//使当前结点的指针域指向tempPtr的后继结点
    return tempPtr;	//返回被删除的结点的地址
}

template <class T>
Node<T> *LinkedList<T>::GetNode(const T& item, Node<T>* ptrNext)	//生成新结点
{
   Node<T> *p;
   p = new Node<T>(item,ptrNext);
   if (p == NULL)
   {
      cout << "Memory allocation failure!\n";
      exit(1);
   }
   return p;
}

template <class T>
void LinkedList<T>::FreeNode(Node<T> *p) //释放结点
{
   delete p;
}

template <class T>
void LinkedList<T>::CopyList(const LinkedList<T>& L) //链表复制函数
{
   Node<T> *p = L.front;	//P用来遍历L 
   int pos;
   while (p != NULL)	//将L中的每一个元素插入到当前链表最后
   {
      InsertRear(p->data);
      p = p->NextNode();
   }
   if (position == -1)	//如果链表空,返回
      return;
   //在新链表中重新设置prevPtr和currPtr
   prevPtr = NULL;
   currPtr = front;
   for (pos = 0; pos != position; pos++)
   {
      prevPtr = currPtr;
      currPtr = currPtr->NextNode();
   }
}

template <class T>  //构造一个新链表，将有关指针设置为空，size为0，position为-1
LinkedList<T>::LinkedList(void): front(NULL), rear(NULL),
      prevPtr(NULL),currPtr(NULL), size(0), position(-1)
{}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T>& L)  //拷贝构造函数
{
   front = rear = NULL;
   prevPtr = currPtr = NULL;
   size = 0;
   position = -1;
   CopyList(L);
}

template <class T>
void LinkedList<T>::ClearList(void)	//清空链表
{
   Node<T> *currPosition, *nextPosition;
   currPosition = front;
   while(currPosition != NULL)
   {
      nextPosition = currPosition->NextNode(); //取得下一结点的地址
      FreeNode(currPosition);	//删除当前结点
      currPosition = nextPosition;	//当前指针移动到下一结点
   }
   front = rear = NULL;
   prevPtr = currPtr = NULL;
   size = 0;
   position = -1;
}

template <class T>
LinkedList<T>::~LinkedList(void)	//析构函数
{   ClearList();  }

template <class T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& L)//重载"="
{
   if (this == &L)	// 不能将链表赋值给它自身
      return *this;
   ClearList();
   CopyList(L);
   return *this;
}

template <class T>
int LinkedList<T>::ListSize(void) const	//返回链表大小的函数
{   return size;  }

template <class T>
int LinkedList<T>::ListEmpty(void) const	//判断链表为空否
{   return size == 0;  }

template <class T>
void LinkedList<T>::Next(void)	//将prevPtr和currPtr向前移动一个结点
{
   if (currPtr != NULL)
   {
      prevPtr = currPtr;
      currPtr = currPtr->NextNode();
      position++;
   }
}

template <class T>
int LinkedList<T>::EndOfList(void) const	// 判断是否已达表尾
{   return currPtr == NULL;  }


template <class T>
int LinkedList<T>::CurrentPosition(void) const  // 返回当前结点的位置
{   return position;  }


template <class T>
void LinkedList<T>::Reset(int pos)	//将链表当前位置设置为pos 
{
   int startPos;
   if (front == NULL)	// 如果链表为空，返回
      return;
   if (pos < 0 || pos > size-1)	// 如果指定位置不合法，中止程序
   {
      cerr << "Reset: Invalid list position: " << pos << endl;
      return;
   }
   // 设置与遍历链表有关的成员
   if(pos == 0)	// 如果pos为0，将指针重新设置到表头
   {
      prevPtr = NULL;
      currPtr = front;
      position = 0;
   }
   else	// 重新设置 currPtr, prevPtr, 和 position 
   {
       currPtr = front->NextNode();
       prevPtr = front;
       startPos = 1;
	   for(position=startPos; position != pos; position++)
	   {
	       prevPtr = currPtr;
	       currPtr = currPtr->NextNode();
      }
   }
}

template <class T>
T& LinkedList<T>::Data(void)	//返回一个当前结点数值的引用
{
   if (size == 0 || currPtr == NULL)	// 如果链表为空或已经完成遍历则出错
   {
      cerr << "Data: invalid reference!" << endl;
      exit(1);
   }
   return currPtr->data;
}

template <class T>
void LinkedList<T>::InsertFront(const T& item)   // 将item插入在表头
{
   if (front != NULL)	// 如果链表不空则调用Reset 
      Reset();
   InsertAt(item);	// 在表头插入
}


template <class T>
void LinkedList<T>::InsertRear(const T& item)   // 在表尾插入结点
{
   Node<T> *newNode;
   prevPtr = rear;
   newNode = GetNode(item);	// 创建新结点
   if (rear == NULL)	// 如果表空则插入在表头
      front = rear = newNode;
   else
   {
      rear->InsertAfter(newNode);
      rear = newNode;
   }
   currPtr = rear;
   position = size;
   size++;
}


template <class T>
void LinkedList<T>::InsertAt(const T& item)	// 将item插入在链表当前位置
{
   Node<T> *newNode;
   if (prevPtr == NULL)	// 插入在链表头，包括将结点插入到空表中
   {
      newNode = GetNode(item,front);
      front = newNode;
   }
   else	// 插入到链表之中. 将结点置于prevPtr之后
   {
      newNode = GetNode(item);
      prevPtr->InsertAfter(newNode);
   }
   if (prevPtr == rear)	//正在向空表中插入，或者是插入到非空表的表尾
   {
      rear = newNode;	//更新rear 
      position = size;	//更新position 
   }
   currPtr = newNode;	//更新currPtr
   size++;	//使size增值
}


template <class T>
void LinkedList<T>::InsertAfter(const T& item)  // 将item 插入到链表当前位置之后
{
   Node<T> *p;
   p = GetNode(item);
   if (front == NULL)	 // 向空表中插入
   {
      front = currPtr = rear = p;
      position = 0;
   }
   else	// 插入到最后一个结点之后
   {
      if (currPtr == NULL)
        currPtr = prevPtr;
      currPtr->InsertAfter(p);
      if (currPtr == rear)
      {
        rear = p;
        position = size;
      }
      else
        position++;
      prevPtr = currPtr;
      currPtr = p;
   }
   size++;              // 使链表长度增值
}


template <class T>
T LinkedList<T>::DeleteFront(void)	// 删除表头结点
{
   T item;
   Reset();
   if (front == NULL)
   {
      cerr << "Invalid deletion!" << endl;
      exit(1);
   }
   item = currPtr->data;
   DeleteAt();
   return item;
}

     
template <class T>
void LinkedList<T>::DeleteAt(void)	// 删除链表当前位置的结点
{
   Node<T> *p;
   if (currPtr == NULL)	// 如果表空或达到表尾则出错
   {
      cerr << "Invalid deletion!" << endl;
      exit(1);
   }
   if (prevPtr == NULL)	// 删除将发生在表头或链表之中
   {
      p = front;	// 保存头结点地址
      front = front->NextNode();	//将其从链表中分离
   }
   else	//分离prevPtr之后的一个内部结点，保存其地址
      p = prevPtr->DeleteAfter();

   if (p == rear)	// 如果表尾结点被删除
   {
      rear = prevPtr;	//新的表尾是prevPtr 
      position--;	//position自减
   }
   currPtr = p->NextNode();	// 使currPtr越过被删除的结点
   FreeNode(p);	// 释放结点，并
   size--;	//使链表长度自减
}

#endif  // LINKEDLIST_CLASS

