#include <iostream>
using namespace std;
template <class T>
class BaseClass					//定义BaseClass类模板
{	friend class FriClass;  			//指定FriClass是它的友元类
private:
    T num;
public:
    BaseClass(T n){num=n;}
    void display(){cout<<"The num is:"<<num<<endl; }
};
class FriClass					//定义FriClass，它是BaseClass类的友元类
{public:
template <class T>					//模板函数使用BaseClass类的私有成员
    void disp(BaseClass <T> yc){ cout<<"The num is:"<<yc.num<<endl; } 
};
int main()				//在main()函数中创建和使用BaseClass和FriClass类对象
{   BaseClass <int> a(8); 			//声明BaseClass类int类型对象
	 BaseClass <double> b(8.8);    	//声明BaseClass类double类型对象
    cout<<"BaseClass:"<<endl;    	//显示a和b对象的值
    a.display();    b.display();
    FriClass temp;    				//声明FriClass类对象
    cout<<"FriClass:"<<endl;    		//通过temp显示a和b对象的值
    temp.disp(a);  temp.disp(b);
	return 0;
}
