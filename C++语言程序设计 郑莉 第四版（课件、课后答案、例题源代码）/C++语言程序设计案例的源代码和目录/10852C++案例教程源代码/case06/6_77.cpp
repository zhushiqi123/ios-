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
{	const int total=100;
   int choice, i=0,sn;
   double  weight;
   watermelon* watermelonArray[total];
   for (int index=0; index<100; index++) watermelonArray[index]=NULL;
   do{   
       cout<<"Please enter your choice(1-sell; 2-refund; 0-exit):\n";
       cin>>choice;
       switch (choice)
       { //������
         case 1:  cout<<"Weight:  "; cin>>weight;  
                  watermelonArray[i++]=new watermelon(weight);
                  break;
         //�˹�
         case 2:  cout<<"SN(0-99):  "; cin>>sn;
                  delete watermelonArray[sn];
                  watermelonArray[sn]=NULL;
                  break;
       }
    }while(choice);
	watermelon::total_disp(); //��ʾ�۳�����������
	return 0;
}
