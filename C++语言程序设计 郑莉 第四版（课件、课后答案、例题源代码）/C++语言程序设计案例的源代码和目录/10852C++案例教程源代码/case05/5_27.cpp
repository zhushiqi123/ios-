#include<iostream>
#include<cmath>
using namespace std;
#define Max(a,b) (a>b?\
		a:b)										//多行宏定义
#define s(a,b,c)   (a+b+c)/2
#define area(a,b,c) \
		sqrt(s(a,b,c)*(s(a,b,c)-a)*(s(a,b,c)-b)*(s(a,b,c)-c))	//多行宏定义
int main()	
{ 	float x=4,y=5,z=6;                
	cout<<"The area is :"<<area(x,y,z)<<endl <<"The max value is :"<<Max(x,y)<<endl;
	return 0;
}
