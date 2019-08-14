#include <iostream> 
using namespace std; 
int main() 
{	cout<<"The even numbers are as follows:"<<endl; 
	for(int i=0; i<=20; i++) 
	{	if(i%2) continue; 				//根据条件使用continue结束本次循环
		cout << i << ' '; 
	} 
	return 0; 
}
