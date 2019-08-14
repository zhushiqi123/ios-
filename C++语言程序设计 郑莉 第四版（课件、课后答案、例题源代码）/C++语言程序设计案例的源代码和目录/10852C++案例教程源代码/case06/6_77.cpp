#include <iostream>
using namespace std;
class watermelon
{	float weight;
	static float total_weight;//静态数据成员声明
	static int total_number;  //静态数据成员声明
 public:
	watermelon(float w) {weight=w; total_weight+=weight;	total_number++; }//模拟售瓜
	~watermelon()	{	total_weight-=weight;	total_number--;	} //模拟退瓜
	void disp();					//显示瓜重
	static void total_disp();		//显示总重和总数
};
float watermelon::total_weight=0;	//静态数据成员定义
int watermelon::total_number=0;		//静态数据成员定义
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
       { //卖出瓜
         case 1:  cout<<"Weight:  "; cin>>weight;  
                  watermelonArray[i++]=new watermelon(weight);
                  break;
         //退瓜
         case 2:  cout<<"SN(0-99):  "; cin>>sn;
                  delete watermelonArray[sn];
                  watermelonArray[sn]=NULL;
                  break;
       }
    }while(choice);
	watermelon::total_disp(); //显示售出总数、总重
	return 0;
}
