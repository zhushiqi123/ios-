#include <iostream>
using namespace std;
class BaseClass			//定义BaseClass类
{	friend class FriClass;   //指定FriClass是它的友元类
  private:
    int num;
  public:
    BaseClass(int n){num=n;}
    void display(){cout<<"The num is:"<<num<<endl; }
};
class FriClass              //定义FriClass，它是BaseClass类的友元类
{ public:                    //成员函数直接使用BaseClass类的私有成员
	void disp1(BaseClass yc) { cout<<"The num is:"<<yc.num<<endl; }
	void disp2(BaseClass yc) { yc.display();}
};
int main()	
{   BaseClass a(10),b(100);    		//声明BaseClass类对象
    cout<<"BaseClass:"<<endl;   
    a.display();    b.display();		//显示a和b对象的值
    FriClass temp;    				//声明FriClass类对象
    cout<<"FriClass:"<<endl;    	
    temp.disp1(a);    temp.disp2(b); //通过temp显示a和b对象的值
	 return 0;
}
