#include <iostream>
using namespace std;
#include <malloc.h>
class CRect
{   int length,width;
public:
    CRect(int l,int w)    {length=l;		width=w; }
    void disp()  { cout << "The area is:" << length*width << endl;}
    void *operator new(size_t size)  { return malloc(size);}  //语句1：重载new 
    void operator delete(void *p)  { free(p);  }         //语句2：重载delete 
};
int main ()
{   CRect *p;   //定义对象指针
	p=new CRect(5, 9) ;   p->disp () ;   delete p;//使用重载的new和delete
	return 0;
}
