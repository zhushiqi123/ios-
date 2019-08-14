#include <iostream>
using namespace std;
int main()
{	const float PI=3.1415926; 		//float 型常量
	float r=2.0; 					//用float 型常量初始化变量
	cout<<"r="<<r<<endl;			//输出圆的半径
	float length; 					//float型变量声明
	length=2*PI*r; 				//计算圆的周长
	cout<<"Length="<<length<<endl;	//输出圆的周长
	float area=PI*r*r; 				//计算圆的面积
	cout<<"Area="<<area<<endl;		//输出圆的面积
	return 0;
}
