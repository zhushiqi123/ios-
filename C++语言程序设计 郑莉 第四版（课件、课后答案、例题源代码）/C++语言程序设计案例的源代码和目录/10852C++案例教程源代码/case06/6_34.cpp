#include <iostream >
#include <cmath>
using namespace std;
double *quadratic(double *factor) 		//返回指针类型
{ 	static double result[2];			 	//语句1：设置静态属性用于保持数值
	double delta;	delta=factor[1]*factor[1]-4*factor[0]*factor[2];
	if(delta<0) return 0;					//语句2：方程无解时返回空指针
	delta=sqrt(delta);
	result[0]=(-factor[1]+delta)/(2*factor[0]);
     result[1]=(-factor[1]-delta)/(2*factor[0]);
	return result;
}
int main() 
{	double fun[3],*r;
	cout<<"Please enter three factors:";	cin>>fun[0]>>fun[1]>>fun[2];
	r=quadratic(fun);
	if(r)		cout<<"The solution is: X1="<<r[0]<<"\t"<<"X2="<<r[1]<<endl;
	else		cout<<"No solution!\n";
	return 0;
}
