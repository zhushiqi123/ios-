#include <iostream> 
using namespace std; 
void MultiCatch(int test) 
{ 	try	{if(test) throw test; 				//�׳� int �쳣
		else throw "Value is zero"; 		//�׳� char * �쳣
	} 
	catch(int i) 	{ 	cout << "Caught int!  Ex. #: " << i << '\n'; 	} //��׽ int �쳣
	catch(char *str){ cout<<"Caught a string: "<<str<< '\n'; } //��׽ char * �쳣
} 
int main() 
{ 	MultiCatch(1); 	MultiCatch(2); 
	MultiCatch(0); 	MultiCatch(3); 
	return 0; 
}
