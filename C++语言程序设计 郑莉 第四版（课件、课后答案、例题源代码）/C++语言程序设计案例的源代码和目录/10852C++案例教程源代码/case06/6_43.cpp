#include <iostream>
using namespace std;
class Point									//�������
{ int X,Y,Z;
public:	//�ⲿ�ӿ�
	Point(int x=0, int y=0,int z=0) {X=x;Y=y;Z=z;}	//���캯��
	int GetX() {return X;}						//��������������X
	int GetY() {return Y;}						//��������������Y
	int GetZ() {return Z;}						//��������������Z
};
int main()										//������
{   Point Obj(4,5,6);							//��������Obj
	Point *pObj=&Obj;							//��������ָ�벢��ʼ��
	int (Point::*p_GetX)()=Point::GetX;			//������Ա����ָ�벢��ʼ��
	int (Point::*p_GetY)()=Point::GetY;			//������Ա����ָ�벢��ʼ��
	int (Point::*p_GetZ)()=Point::GetZ;			//������Ա����ָ�벢��ʼ��
	cout<<"The coordinate of X is:"<<(Obj.*p_GetX)()<<endl;//���1��ʹ�ó�Ա����ָ��
	cout<<"The coordinate of Y is:"<<(pObj->GetY)()<<endl; //���2��ʹ�ö���ָ��
	cout<<"The coordinate of Z is:"<<Obj.GetZ()<<endl;	 	//���3��ʹ�ö�����
	return 0;
}
