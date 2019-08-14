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
{	watermelon w1(4.5f);					//卖出瓜
	w1.disp();	watermelon::total_disp();
	watermelon w2(8.5f);					//卖出瓜
	w2.disp();	watermelon::total_disp();
	watermelon w3(2.5f);					//卖出瓜
	w3.disp();	watermelon::total_disp();
	w2.~watermelon();					//退瓜
	watermelon::total_disp();
	return 0;
}
