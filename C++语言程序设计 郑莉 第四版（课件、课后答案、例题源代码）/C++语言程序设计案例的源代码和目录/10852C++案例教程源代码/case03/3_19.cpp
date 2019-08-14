#include <iostream>
using namespace std;
int main()
{	int min (int a, int b, int c);                 //函数声明
	int min (int a, int b);                  		//函数声明
	int i1 ,i2,i3,i;
	cout<<"Enter three integers:";	cin >>i1 >>i2 >>i3;     //输入3个整数
	i = min(i1 ,i2) ;  cout <<"The min in two intergers=" <<i <<endl; // 2个整数中最小者
	i = min(i1 ,i2 ,i3) ;                         // 3个整数中最小者
    cout <<"The min in three intergers=" <<i <<endl;
	return 0;
}
int min(int a,int b,int c)            //定义求3个整数中的最小者的函数
{	int k;		k=(a<b)?a:b;		k=(k<c)?k:c;	return k;}
int min(int a,int b)                  //定义求2个整数中的最小者的函数
{	int k;		k=(a<b)?a:b;		return k;}
