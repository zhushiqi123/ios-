#include <iostream> 
using namespace std; 
void XFun() 
{	try	
     {	throw "hello";	} //抛出char *
	catch(char *) 	
     {cout << "Caught char * inside XFun\n";	throw ; } //重新抛出 char * 
} 
int main() 
{	try	
     { 	XFun(); 	}
	catch(char *) 	
     {	cout << "Caught char * inside main\n"; 	}
	return 0; 
}
