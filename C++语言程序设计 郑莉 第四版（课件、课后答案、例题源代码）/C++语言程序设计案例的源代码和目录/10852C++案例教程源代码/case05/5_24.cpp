#include<iostream>           
using namespace std;
#define PI 3.14159          	 //宏名PI为符号常量
#define n a                 	 //宏名n将用a来替换
#define LENGTH  2*PI*n            // 宏名LENGTH将用2*PI*n来替换
int main()
{	int n=1;                       //int n=1;替换为int a=1;
	cout<<"LENGTH="<<LENGTH<<endl; //替换为cout<<"LENGTH="<<2*3.14159*a<<endl; 	
	return 0;
}
