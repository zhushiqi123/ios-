#include<iostream>         
using namespace std;
#define PI 3.14159          		//����Pi���滻Ϊ3.14159
#define n a      
#undef PI						//ȡ������PI�Ķ���
#define PI 3.1415926          	//���¶������PI���滻3.1415926
#define LENGTH  2*PI*n          // ����LENGTH����2*PI*n���滻
int main()
{	int n=1;                      //int n=1;�滻Ϊint a=1;
	cout<<"LENGTH="<<LENGTH<<endl;//�滻Ϊcout<<"LENGTH="<<2*3.1415926*a<<endl; 	
	return 0;
}
