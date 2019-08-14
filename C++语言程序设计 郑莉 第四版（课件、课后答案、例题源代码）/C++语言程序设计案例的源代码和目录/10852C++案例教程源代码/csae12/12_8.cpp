#include <iostream> 
using namespace std; 
void XFun(int type) 
{ 	try	{if(type==0) throw type; // 抛出 int 
		if(type==1) throw 'a'; // 抛出 char 
		if(type==2) throw 123.23; // 抛出 double 
	} 
	catch(...)	{cout << "Caught One!\n"; } // 捕捉所有异常
} 
int main() 
{	XFun(0); 	XFun(1); 
	XFun(2); 
	return 0; 
}
