#include <iostream> 
using namespace std; 
void XFun() 
{	try	
     {	throw "hello";	} //�׳�char *
	catch(char *) 	
     {cout << "Caught char * inside XFun\n";	throw ; } //�����׳� char * 
} 
int main() 
{	try	
     { 	XFun(); 	}
	catch(char *) 	
     {	cout << "Caught char * inside main\n"; 	}
	return 0; 
}
