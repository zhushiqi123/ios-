#include <iostream> 
using namespace std; 
void MultiCatch(int test) 
{ 	try	{if(test) throw test; 				//抛出 int 异常
		else throw "Value is zero"; 		//抛出 char * 异常
	} 
	catch(int i) 	{ 	cout << "Caught int!  Ex. #: " << i << '\n'; 	} //捕捉 int 异常
	catch(char *str){ cout<<"Caught a string: "<<str<< '\n'; } //捕捉 char * 异常
} 
int main() 
{ 	MultiCatch(1); 	MultiCatch(2); 
	MultiCatch(0); 	MultiCatch(3); 
	return 0; 
}
