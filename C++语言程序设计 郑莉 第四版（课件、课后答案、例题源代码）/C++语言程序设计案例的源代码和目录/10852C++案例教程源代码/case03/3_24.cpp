#include<iostream>
#include<cmath>
using namespace std;
void main(void)
{	double number = 123.54,num=-123.54;
	double down, up,num_down,num_up;
	down = floor(number);  num_down = floor(num);
	up = ceil(number);  num_up = ceil(num);
	cout<<"����:"<<number<<endl <<"floor��:"<<down<<endl <<"ceil��:"<<up << endl;
	cout<<"����:"<<num<<endl <<"floor��:"<<num_down<<endl <<"ceil��:"<<num_up << endl;
}
