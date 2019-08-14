#include <iostream>
using namespace std;
class CRect
{    int length, width;
public :
     CRect ()  { };
     CRect(int l, int w)  { length=l;	width=w;}
     void disp()  { cout << "The area is:" << length*width << endl;}
     CRect operator, (CRect r)        //Óï¾ä1£ºÖØÔØ¶ººÅÔËËã·û
     {    CRect temp;      temp.length=r.length;     temp.width=r.width;
          return temp;
      }
     CRect operator+(CRect r)
     {    CRect temp;      temp.length=r.length+length;    temp.width=r.width+width;
          return temp;
     }
};
int main()
{     CRect r1(3,3) , r2(5,8) , r3(2,4) ;
      r1.disp() ;      r2.disp() ;      r3.disp() ;
      r1=(r1,r2+r3,r3);      r1.disp();   //Óï¾ä2£ºÊ¹ÓÃÖØÔØµÄ¶ººÅÔËËã·û
	  return 0;
}
