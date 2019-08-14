#include<iostream>         
using namespace std;
#define PI 3.14159          		//宏名Pi将替换为3.14159
#define n a      
#undef PI						//取消宏名PI的定义
#define PI 3.1415926          	//重新定义宏名PI将替换3.1415926
#define LENGTH  2*PI*n          // 宏名LENGTH将用2*PI*n来替换
int main()
{	int n=1;                      //int n=1;替换为int a=1;
	cout<<"LENGTH="<<LENGTH<<endl;//替换为cout<<"LENGTH="<<2*3.1415926*a<<endl; 	
	return 0;
}
