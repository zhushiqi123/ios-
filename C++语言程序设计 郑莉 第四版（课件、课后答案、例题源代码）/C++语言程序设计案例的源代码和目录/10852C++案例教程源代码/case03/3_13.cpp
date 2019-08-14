#include <iostream>
using namespace std;
long ComputFactor(int n)  //计算n!
{	long f;
	if (n<0) cout<<"n<0 is error!"<<endl;
	else if (n==0) f=1;
	else f=ComputFactor(n-1)*n;			//递归调用
	return(f);
}
long ComputTotal(int n)  //计算0!+...+n!
{	long f;
	if (n<0) cout<<"n<0 is error!"<<endl;
	else if (n==0) f=1;
	else f= ComputTotal (n-1)+ ComputFactor(n);	//递归调用
	return(f);
}
int main()
{	int n;	long y;
	cout<<"Enter a positive integer:";	cin>>n;
	for(int i=0;i<=n;i++)
	{	y=ComputFactor(i);
		cout<<i<<"!="<<y<<endl;
	}
	y=ComputTotal(n);
	cout<<"The sum="<<y<<endl;
	return 0;
}
