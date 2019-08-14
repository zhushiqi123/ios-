#include <iostream> 
#include <conio.h> 
using namespace std; 
int main() 
{ 	while (1)										//死循环
	{	cout<<"Running the loop, until you hit a key.\n";
		if(kbhit())		break;							//检查是否有按键按下
	}
	cout<<"\n Loop is over.\n";
 	return 0; 
}
