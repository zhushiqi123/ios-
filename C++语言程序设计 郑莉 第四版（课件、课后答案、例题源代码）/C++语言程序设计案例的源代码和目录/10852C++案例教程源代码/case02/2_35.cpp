#include <iostream> 
using namespace std; 
int main() 
{	cout<<"The even numbers are as follows:"<<endl; 
	for(int i=0; i<=20; i++) 
	{	if(i%2) continue; 				//��������ʹ��continue��������ѭ��
		cout << i << ' '; 
	} 
	return 0; 
}
