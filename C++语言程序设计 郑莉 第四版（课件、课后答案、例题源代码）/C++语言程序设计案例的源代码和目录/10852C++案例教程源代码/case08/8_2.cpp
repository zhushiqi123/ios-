#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
class CRect
{	long    left;   long    top;
	long    right;  long    bottom;
public: 
	CRect(int l=1, int t=2, int r=3, int b=4);			
	void SetRect(int x1, int y1, int x2, int y2); 	//���صĳ�Ա����
	void SetRect(const CRect& r) ; 				//���صĳ�Ա����
    	void Disp();		
};
void CRect::Disp()                     			//��Ա������ʾ���������
{	cout<<"left="<<left<<"; top="<<top<<"; right="<<right<<"; bottom="<<bottom;}
CRect::CRect(int l, int t, int r, int b) 			//���ι��캯����������ĳ�Ա����
{	SetRect(l,t,r,b);   } 
void CRect::SetRect(const CRect& r)   			//�������þ��γ�Ա����
{   left =r.left;	 top = r.top;	right = r.right;	 bottom = r.bottom;}
void CRect::SetRect(int l, int t, int right, int bottom) 	//�������þ��γ�Ա����
{  left = l; top = t;   this->right = right;  this->bottom = bottom;  }
int main()
{	CRect r,s;            				//���ù��캯��CRect(1, 2, 3, 4)�������
	r.Disp();                   		//r������ʾ����
	r.SetRect(5,6,7,8);   s.SetRect(r);  //�������صĳ�Ա����
    s.Disp();                   			//��ʾs��������
	return 0;
} 
