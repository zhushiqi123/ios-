#include <iostream> 
using namespace std; 
void XFun(int type) throw(int, char, double) //该函数仅能抛出 ints, chars, 和 doubles. 
{  if(type==0) throw type;   //抛出int 
   if(type==1) throw 'a';    //抛出char 
   if(type==2) throw 123.23; //抛出double 
} 
int main() 
{	try	{	XFun(0);	}
	catch(int i) 	{ 	cout << "Caught int\n";	} 
	catch(char c) 	{ 	cout << "Caught char\n"; 	} 
	catch(double d) 	{ 	cout << "Caught double\n"; 	} 
	return 0; 
}
