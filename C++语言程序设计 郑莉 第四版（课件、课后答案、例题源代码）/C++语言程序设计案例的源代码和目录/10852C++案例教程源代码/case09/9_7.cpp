#include <iostream>
using namespace std;
template <class T>
class BaseClass					//����BaseClass��ģ��
{	friend class FriClass;  			//ָ��FriClass��������Ԫ��
private:
    T num;
public:
    BaseClass(T n){num=n;}
    void display(){cout<<"The num is:"<<num<<endl; }
};
class FriClass					//����FriClass������BaseClass�����Ԫ��
{public:
template <class T>					//ģ�庯��ʹ��BaseClass���˽�г�Ա
    void disp(BaseClass <T> yc){ cout<<"The num is:"<<yc.num<<endl; } 
};
int main()				//��main()�����д�����ʹ��BaseClass��FriClass�����
{   BaseClass <int> a(8); 			//����BaseClass��int���Ͷ���
	 BaseClass <double> b(8.8);    	//����BaseClass��double���Ͷ���
    cout<<"BaseClass:"<<endl;    	//��ʾa��b�����ֵ
    a.display();    b.display();
    FriClass temp;    				//����FriClass�����
    cout<<"FriClass:"<<endl;    		//ͨ��temp��ʾa��b�����ֵ
    temp.disp(a);  temp.disp(b);
	return 0;
}
