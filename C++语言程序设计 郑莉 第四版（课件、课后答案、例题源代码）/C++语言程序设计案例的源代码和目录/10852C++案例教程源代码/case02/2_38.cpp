#include <iostream> 
using namespace std; 
int main() 
{	typedef int integer; 			//������int��������Ϊinteger
  	integer i; 					//ʹ��integer�������
  	cout<<"The numbers are as follows:"<<endl; 
	for(i=0; i<=50; i++) { if(i%3) continue;     cout << i << ' '; } 
  	return 0; 
}
