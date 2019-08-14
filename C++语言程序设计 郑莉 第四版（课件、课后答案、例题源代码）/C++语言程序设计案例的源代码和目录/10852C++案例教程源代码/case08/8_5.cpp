#include <iostream>
using namespace std;
class CRect
{  int length,width;
public :
   CRect(int l,int w)  { length=l;width=w;}
   void disp()  { cout << "area:" << length*width << endl;}
   friend int operator>(CRect r1,CRect r2)			//重载关系运算符>
   {		return r1.length*r1.width>r2.length*r2.width?1:0;   }
   friend int operator<(CRect r1,CRect r2)			//重载关系运算符<
   {		return r1.length*r1.width<r2.length*r2.width?1:0;   }
   friend int operator>=(CRect r1,CRect r2)			//重载关系运算符>=
   {		return r1.length*r1.width>=r2.length*r2.width?1:0;   }
   friend int operator<=(CRect r1,CRect r2)			//重载关系运算符<=
   {		return r1.length*r1.width<=r2.length*r2.width?1:0;   }
};
int main()
{  CRect rl (5,5),r2 (4,6) ;
   cout  <<  "rl ";   		rl.disp() ;
   cout  <<  "r2 ";    	r2.disp() ;
   if (rl>r2) cout<< "The area of rl is larger than r2 " << endl; //使用重载的关系运算符
   else cout << "The area of rl is smaller r2 or equal to r2 " << endl;
   return 0;
} 
