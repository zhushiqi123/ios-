#include<iostream>
#include<cmath>
using namespace std;
void main(void)
{	double number = 123.54,num=-123.54;
	double down, up,num_down,num_up;
	down = floor(number);  num_down = floor(num);
	up = ceil(number);  num_up = ceil(num);
	cout<<"正数:"<<number<<endl <<"floor后:"<<down<<endl <<"ceil后:"<<up << endl;
	cout<<"负数:"<<num<<endl <<"floor后:"<<num_down<<endl <<"ceil后:"<<num_up << endl;
}
