#include <iostream>
using namespace std;
class Point	//�������
{public:		//�ⲿ�ӿ�
	//������Ա����ͬ�ϰ����������ԡ�
	Point(int x=0, int y=0,int z=0) {X=x;Y=y;Z=z;countP++;}	//���캯��
	static int GetC() {return countP;}	//��̬������Ա
private:	//˽������
	int X,Y,Z;	
	static int countP;	//��̬���ݳ�Ա������˵��
};
int Point::countP=0;	//��̬���ݳ�Ա������˵��
int main()	//������
{ int (*gc)()=Point::GetC;	//���1������һ��ָ����ľ�̬��Ա����ָ��
  Point Obj(4,5,6), Obj2(14,15,16);		//��������
  cout<<"The number of the Objects is:"<<gc()<<endl;//���2��ͨ������ָ����þ�̬��Ա����
  return 0;
}
