#include<iostream>		
using namespace std;	
int main()			
{	int iCount=1;	iCount=(iCount++)+(iCount++)+(iCount++);		//后置++
	cout<<"The first  iCount="<<iCount<<endl;
	iCount=1;	iCount=(++iCount)+(++iCount)+(++iCount);		//前置++
	cout<<"The second iCount="<<iCount<<endl;
	iCount=1;	iCount=-iCount++;						//后置++
	cout<<"The third  iCount="<<iCount<<endl;
	iCount=1;	iCount=-++iCount;						//前置++
	cout<<"The fourth  iCount="<<iCount<<endl;
	return 0;	
}
