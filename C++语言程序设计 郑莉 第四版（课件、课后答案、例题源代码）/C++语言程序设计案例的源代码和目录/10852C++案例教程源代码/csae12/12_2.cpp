#include<iostream>
using namespace std;
int Divide(int x,int y){	if(y==0)		throw y; 	return x/y;}	//�׳��쳣
int main()
{	try	{	cout<<"5/2="<<Divide(5,2)<<endl;
		cout<<"8/0="<<Divide(8,0)<<endl;				//�����쳣
		cout<<"7/1="<<Divide(7,1)<<endl;
	}
	catch(int) {	cout<<"Exception by deviding zero.\n";	}	//��׽�쳣
	return 0;
}
