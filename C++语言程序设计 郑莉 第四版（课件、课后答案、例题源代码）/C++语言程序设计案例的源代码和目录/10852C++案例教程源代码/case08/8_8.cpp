#include <iostream>
using namespace std;
#include <malloc.h>
class CRect
{   int length,width;
public:
    CRect(int l,int w)    {length=l;		width=w; }
    void disp()  { cout << "The area is:" << length*width << endl;}
    void *operator new(size_t size)  { return malloc(size);}  //���1������new 
    void operator delete(void *p)  { free(p);  }         //���2������delete 
};
int main ()
{   CRect *p;   //�������ָ��
	p=new CRect(5, 9) ;   p->disp () ;   delete p;//ʹ�����ص�new��delete
	return 0;
}
