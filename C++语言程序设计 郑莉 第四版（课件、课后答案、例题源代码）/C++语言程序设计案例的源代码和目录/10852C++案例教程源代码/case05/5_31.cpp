#include<iostream>
using namespace std;
//#define BRIEF 
#define STUDY 
#define PROFESSION 
//#define SPLENDOR
void main(void)
{
	#if defined(BRIEF)&&!defined(STUDY)
		cout<<" brief info\n";
	#elif	defined(STUDY)&&!defined(PROFESSION)
		cout<<" for studying\n";          
	#elif defined(PROFESSION)&&!defined(SPLENDOR)
		cout<<"professional\n"; 
	#else	cout<<"splendid\n";     
	#endif 
}
