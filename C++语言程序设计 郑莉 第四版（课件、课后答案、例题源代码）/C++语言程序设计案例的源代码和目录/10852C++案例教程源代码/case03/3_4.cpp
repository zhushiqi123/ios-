#include<iostream>
using namespace std;
int sgn(double x) 			//������ź���sgn()���䷵��ֵΪint����
{   if (x>0) return(1);    	//���س���1
    if (x<0) return(-1);   	//���س���2
    return(0);          	//���س���3
}
int main()
{   double x;  
	for (int i=0;i<=2;i++) 
	{  cout<<"Input x=";     cin>>x;
       cout<<"sgn("<<x<<")="<<sgn(x)<<endl;
    }
	return 0;
}
