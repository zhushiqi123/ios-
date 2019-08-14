#include<iostream>
using namespace std;
inline min(int x,int y,int z )			//内联函数
{	int min=x;
	if(y<min) min=y;
	if(z<min) min=z;
	return min;
}
#define  MIN(a,b)   ((a)<(b)?(a):(b))		//宏函数
#define  min(a,b,c)  MIN(a,MIN(c,b))	//宏函数
int main()	
{  	cout<<"The min value is:"<<(min)(4,5,3.0)<<endl;  //调用内联函数
	cout<<"The min value is:"<<min(5.0,4,3.0)<<endl;  //调用宏函数
	return 0;
}
