#include<iostream>
#include<cmath>
using namespace std;
void main(void)
{	double hypotenus;
	double x = 3.0,y = 4.0;
	hypotenus = hypot(x, y);
	cout<<"斜边长="<<hypotenus;
	int n=3;
	cout<<x<<"的"<<y<<"方值="<<pow(x, y)<<endl;
	cout <<x<<"开平方根="<<sqrt(x);
}
