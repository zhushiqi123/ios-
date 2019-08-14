#include <iostream>
using namespace std;
#include "linkstack.h"

int main()
{
	LinkStack<int> intStack;
	for(int i=0; i<10; i++)
	{
		intStack.Push(i);
		cout<<intStack.Peek()<<endl;
	}
	while(!intStack.StackEmpty())
		cout<<intStack.Pop()<<endl;
	return 0;
}
