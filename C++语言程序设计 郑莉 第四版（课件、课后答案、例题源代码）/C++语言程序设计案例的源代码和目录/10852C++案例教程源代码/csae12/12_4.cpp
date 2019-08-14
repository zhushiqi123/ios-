#include <iostream>
#include <cmath>
using namespace std;
double dsqrt(double d){	if(d<0)	throw 1; 	return sqrt(d);}//Å×³öÒì³£
int main()
{	int x;
	while(1)
	{	cout<<"Please input a positive integer:";		cin>>x;
		try		{cout<<dsqrt(x)<<endl;	}
		catch(int) {cout<<"It is a negtive integer"<<endl; }//²¶×½Òì³£
		if(x<0) break;
	}
	return 0;
}
