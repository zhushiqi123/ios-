#include <iostream> 
using namespace std; 
int main() 
{	double a,b; 
	double *p=&a,*q=&b;  
	//�ж�����ָ���Ƿ�ָ��ͬһ���ڴ�λ��
	if (p==q)	  	cout<<"The pointer of p is equal to q"<<endl;
	else if(p>q)	cout<<"The address of a :"<<p<<" is larger than the address of b:"<<q;
	else	  		cout<<"The address of a :"<<p<<" is smaller than the address of b:"<<q;  
	return 0; 
}