#include <iostream> 
#include <conio.h> 
using namespace std; 
int main() 
{ 	while (1)										//��ѭ��
	{	cout<<"Running the loop, until you hit a key.\n";
		if(kbhit())		break;							//����Ƿ��а�������
	}
	cout<<"\n Loop is over.\n";
 	return 0; 
}
