#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
class CRect
{	long    left;   long    top;
	long    right;  long    bottom;
public: 
	CRect(int l=1, int t=2, int r=3, int b=4);			
	void SetRect(int x1, int y1, int x2, int y2); 	//重载的成员函数
	void SetRect(const CRect& r) ; 				//重载的成员函数
    	void Disp();		
};
void CRect::Disp()                     			//成员函数显示自身的数据
{	cout<<"left="<<left<<"; top="<<top<<"; right="<<right<<"; bottom="<<bottom;}
CRect::CRect(int l, int t, int r, int b) 			//带参构造函数调用自身的成员函数
{	SetRect(l,t,r,b);   } 
void CRect::SetRect(const CRect& r)   			//重载设置矩形成员函数
{   left =r.left;	 top = r.top;	right = r.right;	 bottom = r.bottom;}
void CRect::SetRect(int l, int t, int right, int bottom) 	//重载设置矩形成员函数
{  left = l; top = t;   this->right = right;  this->bottom = bottom;  }
int main()
{	CRect r,s;            				//调用构造函数CRect(1, 2, 3, 4)定义对象
	r.Disp();                   		//r对象显示数据
	r.SetRect(5,6,7,8);   s.SetRect(r);  //调用重载的成员函数
    s.Disp();                   			//显示s对象数据
	return 0;
} 
