#include <iostream> 
using namespace std; 
namespace CounterNameSpace 		//���������ռ�
{	int upperbound,lowerbound; 	//���ݳ�Ա
	class counter				//���Ա
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
{	using CounterNameSpace::upperbound; //ʹ��CounterNameSpace�ĳ�Աupperbound
	upperbound = 100; 				//����ʹ���޶������ó�Ա upperbound
	CounterNameSpace::lowerbound = 0; 	//�Ծ���Ҫʹ���޶��������ʳ�Աlowerbound.
	CounterNameSpace::counter ob1(10);
	int i;
	do {	
     i = ob1.run(); cout << i << " ";
	} while(i > CounterNameSpace::lowerbound);	cout << endl; 
	using namespace CounterNameSpace;  //ʹ������CounterNameSpace�ĳ�Ա
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
