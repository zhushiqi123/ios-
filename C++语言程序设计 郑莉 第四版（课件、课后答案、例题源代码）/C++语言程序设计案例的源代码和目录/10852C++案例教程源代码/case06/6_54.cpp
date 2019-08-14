#include <iostream>
#include <cassert>
using namespace std;
class pointerDataClass
{public:
    void print() const;				//���x������ p����ֵ
    void setData();				//����x������ p����ֵ
    pointerDataClass(int sizeP = 10);	//���캯��������һ��sizeP��С�����飬Ĭ��10
    ~pointerDataClass();			//�����������ͷ�����pָ����ڴ�ռ�
private:
    int x, lenP, *p;				//*pָ��һ��int��������
};
void pointerDataClass::print() const
{	cout<<"x = "<<x<<endl <<"p = ";
	for(int i = 0; i < lenP; i++)  cout<<p[i]<<" ";
	cout<<endl;
}
void pointerDataClass::setData()
{	cout<<"Enter an integer for x: \n";  cin>>x;
	cout<<"Enter "<<lenP<<" numbers: ";
	for(int i = 0; i < lenP; i++)  cin>>p[i];
	cout<<endl;
}
pointerDataClass::pointerDataClass(int sizeP)
{	x = 0;
	if(sizeP <= 0)
	{	cout<<"Array size must be positive. Creating an array of size 10"<<endl;
		lenP = 10;
	}
	else	  lenP = sizeP;
	p = new int[lenP];	assert(p != NULL);
}
pointerDataClass::~pointerDataClass(){  delete [] p;}
void destroyList(pointerDataClass paramObject){}
int main()
{	pointerDataClass objectOne;				//����һ������
	objectOne.setData();  objectOne.print();	//������ʾ����
	destroyList(objectOne);					//���1������Ĭ�Ͽ������캯��
	objectOne.print();						//��ʾ����
	return 0;						
} 
