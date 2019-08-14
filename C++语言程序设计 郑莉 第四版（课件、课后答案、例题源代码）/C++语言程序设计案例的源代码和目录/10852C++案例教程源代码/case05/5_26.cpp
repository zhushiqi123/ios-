#include<iostream>
#include<cmath>
using namespace std;
#define s(a,b,c)  (a+b+c)/2			//带参数的宏
#define area(a,b,c) sqrt(s(a,b,c)*(s(a,b,c)-a)*(s(a,b,c)-b)*(s(a,b,c)-c)) //带参数的宏
int main()	
{ 	float x=4,y=5,z=6;                
	cout<<"The area is :"<<area(x,y,z)<<endl;  //编译时发生宏替换
	cout<<"The area is :"<<area(5,4,3)<<endl;  //编译时发生宏替换
	return 0;
}
