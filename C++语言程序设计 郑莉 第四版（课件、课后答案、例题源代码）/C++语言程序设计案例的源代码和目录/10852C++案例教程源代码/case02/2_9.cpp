#include<iostream>
using namespace std;
int main()	
{	int iNum1=1,iNum2,iMax;
	cout<<"Please input two integers:\n";	
   cin>>iNum1>>iNum2;
	iMax = iNum1>iNum2 ? iNum1 : iNum2; 		//ʹ����������������������ʽ
	cout<<"The max integer is: "<<iMax<<endl;
   return 0;
}
