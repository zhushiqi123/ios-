#include <iostream>
using namespace std;
class BaseClass			//����BaseClass��
{	friend class FriClass;   //ָ��FriClass��������Ԫ��
  private:
    int num;
  public:
    BaseClass(int n){num=n;}
    void display(){cout<<"The num is:"<<num<<endl; }
};
class FriClass              //����FriClass������BaseClass�����Ԫ��
{ public:                    //��Ա����ֱ��ʹ��BaseClass���˽�г�Ա
	void disp1(BaseClass yc) { cout<<"The num is:"<<yc.num<<endl; }
	void disp2(BaseClass yc) { yc.display();}
};
int main()	
{   BaseClass a(10),b(100);    		//����BaseClass�����
    cout<<"BaseClass:"<<endl;   
    a.display();    b.display();		//��ʾa��b�����ֵ
    FriClass temp;    				//����FriClass�����
    cout<<"FriClass:"<<endl;    	
    temp.disp1(a);    temp.disp2(b); //ͨ��temp��ʾa��b�����ֵ
	 return 0;
}
