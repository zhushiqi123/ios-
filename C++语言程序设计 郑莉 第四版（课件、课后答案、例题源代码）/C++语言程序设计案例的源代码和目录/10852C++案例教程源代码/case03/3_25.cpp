#include<iostream>
#include<cmath>
using namespace std;
void main(void)
{	double fraction, integer,number = 103.567;
	fraction = modf(number, &integer);
	cout<<number<<"��������Ϊ:"<<integer<<" С������Ϊ:"<<fraction;
}
