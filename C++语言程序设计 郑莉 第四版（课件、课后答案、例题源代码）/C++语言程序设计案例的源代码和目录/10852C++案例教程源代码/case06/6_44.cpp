#include <iostream>
using namespace std;
class Point						//�������
{ 	int X,Y,Z;
public:							//�ⲿ�ӿ�
	//������Ա����ͬ�ϰ����������ԡ�
	Point(int x=0, int y=0,int z=0) {X=x;Y=y;Z=z;countP++;}	//���캯��
	static int countP;				//��̬���ݳ�Ա������˵��
};
int Point::countP=0;				//��̬���ݳ�Ա������˵��
int main()	
{	Point Obj1(4,5,6), Obj2(14,15,16);	//��������
	int *count=&Point::countP;   	//���1������ָ����ľ�̬���ݳ�Ա��ָ��
	cout<<"The number of the Objects is:"
		<<*count<<endl;			//���2��ֱ��ͨ��ָ����ʾ�̬���ݳ�Ա
	return 0;
} 
