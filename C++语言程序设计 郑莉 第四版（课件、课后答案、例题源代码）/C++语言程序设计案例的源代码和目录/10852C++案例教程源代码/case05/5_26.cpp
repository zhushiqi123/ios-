#include<iostream>
#include<cmath>
using namespace std;
#define s(a,b,c)  (a+b+c)/2			//�������ĺ�
#define area(a,b,c) sqrt(s(a,b,c)*(s(a,b,c)-a)*(s(a,b,c)-b)*(s(a,b,c)-c)) //�������ĺ�
int main()	
{ 	float x=4,y=5,z=6;                
	cout<<"The area is :"<<area(x,y,z)<<endl;  //����ʱ�������滻
	cout<<"The area is :"<<area(5,4,3)<<endl;  //����ʱ�������滻
	return 0;
}
