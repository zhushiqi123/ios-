#include <iostream> 
using namespace std; 
void XFun(int type) throw(int, char, double) //�ú��������׳� ints, chars, �� doubles. 
{  if(type==0) throw type;   //�׳�int 
   if(type==1) throw 'a';    //�׳�char 
   if(type==2) throw 123.23; //�׳�double 
} 
int main() 
{	try	{	XFun(0);	}
	catch(int i) 	{ 	cout << "Caught int\n";	} 
	catch(char c) 	{ 	cout << "Caught char\n"; 	} 
	catch(double d) 	{ 	cout << "Caught double\n"; 	} 
	return 0; 
}
