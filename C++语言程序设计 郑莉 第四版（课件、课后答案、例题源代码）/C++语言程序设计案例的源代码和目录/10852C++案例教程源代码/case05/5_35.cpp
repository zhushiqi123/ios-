#include <iostream>
using namespace std;
class watermelon
{	float weight;
	static float total_weight;//��̬���ݳ�Ա����
	static int total_number;  //��̬���ݳ�Ա����
 public:
	watermelon(float w) {weight=w; total_weight+=weight;	total_number++; }//ģ���۹�
	~watermelon()	{	total_weight-=weight;	total_number--;	} //ģ���˹�
	void disp();					//��ʾ����
	static void total_disp();		//��ʾ���غ�����
};
float watermelon::total_weight=0;	//��̬���ݳ�Ա����
int watermelon::total_number=0;		//��̬���ݳ�Ա����
void watermelon::disp(){	cout<<"The watermelon weight is:" <<weight<<endl; }
void watermelon::total_disp()
{	cout<<"Total weight is:"<<total_weight <<"\nTotal number is:"<<total_number<<endl;}
int main()
{	watermelon w1(4.5f);					//������
	w1.disp();	watermelon::total_disp();
	watermelon w2(8.5f);					//������
	w2.disp();	watermelon::total_disp();
	watermelon w3(2.5f);					//������
	w3.disp();	watermelon::total_disp();
	w2.~watermelon();					//�˹�
	watermelon::total_disp();
	return 0;
}
