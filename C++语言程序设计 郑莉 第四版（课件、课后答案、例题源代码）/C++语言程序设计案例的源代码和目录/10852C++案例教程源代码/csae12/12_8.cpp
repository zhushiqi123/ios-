#include <iostream> 
using namespace std; 
void XFun(int type) 
{ 	try	{if(type==0) throw type; // �׳� int 
		if(type==1) throw 'a'; // �׳� char 
		if(type==2) throw 123.23; // �׳� double 
	} 
	catch(...)	{cout << "Caught One!\n"; } // ��׽�����쳣
} 
int main() 
{	XFun(0); 	XFun(1); 
	XFun(2); 
	return 0; 
}
