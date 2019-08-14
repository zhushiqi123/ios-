#include <iostream> 
using namespace std; 
namespace CounterNameSpace 		//声明命名空间
{	int upperbound,lowerbound; 	//数据成员
	class counter				//类成员
	{	int count;
	public:
		counter(int n)
		{	if(n <= upperbound) count = n;
			else count = upperbound;
		}
		void reset(int n)	{ if(n <= upperbound) count = n; }
		int run()
		{	if(count > lowerbound) return count--;
			else return lowerbound;
		}
	}; 
} 

int main() 
{	using CounterNameSpace::upperbound; //使用CounterNameSpace的成员upperbound
	upperbound = 100; 				//无须使用限定符设置成员 upperbound
	CounterNameSpace::lowerbound = 0; 	//仍旧需要使用限定符来访问成员lowerbound.
	CounterNameSpace::counter ob1(10);
	int i;
	do {	
     i = ob1.run(); cout << i << " ";
	} while(i > CounterNameSpace::lowerbound);	cout << endl; 
	using namespace CounterNameSpace;  //使用整个CounterNameSpace的成员
	counter ob2(20); 
	do {		
     i = ob2.run(); cout << i << " ";
	} while(i > lowerbound);	cout << endl; 
	ob2.reset(100);
	lowerbound = 90;
	do {		
     i = ob2.run(); cout << i << " ";
	} while(i > lowerbound); 
	return 0; 
} 
