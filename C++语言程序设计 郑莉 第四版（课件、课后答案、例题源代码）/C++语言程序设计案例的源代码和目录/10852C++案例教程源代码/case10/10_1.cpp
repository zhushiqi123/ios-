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
{	CounterNameSpace::upperbound = 100; 	//使用作用域分辨符显式引用命名空间中成员
	CounterNameSpace::lowerbound = 0;		//使用作用域分辨符显式引用命名空间中成员
	CounterNameSpace::counter ob1(10);		//使用作用域分辨符显式引用命名空间中成员
	int i;
	do {
     i = ob1.run(); cout << i << " ";
	} while(i > CounterNameSpace::lowerbound);
	cout << endl;
	CounterNameSpace::counter ob2(20);		//使用作用域分辨符显式引用命名空间中成员
	do {	
     i = ob2.run(); cout << i << " ";
	} while(i > CounterNameSpace::lowerbound);
	cout << endl;
	ob2.reset(100);
	CounterNameSpace::lowerbound = 90;		//使用作用域分辨符显式引用命名空间中成员
	do {	
     i = ob2.run(); cout << i << " ";
	} while(i > CounterNameSpace::lowerbound);
	return 0; 
}
