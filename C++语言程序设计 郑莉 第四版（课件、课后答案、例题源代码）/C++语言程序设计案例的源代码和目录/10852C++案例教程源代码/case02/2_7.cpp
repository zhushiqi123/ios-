#include<iostream>		
using namespace std;	
int main()			
{	int iCount=1;	iCount=(iCount++)+(iCount++)+(iCount++);		//����++
	cout<<"The first  iCount="<<iCount<<endl;
	iCount=1;	iCount=(++iCount)+(++iCount)+(++iCount);		//ǰ��++
	cout<<"The second iCount="<<iCount<<endl;
	iCount=1;	iCount=-iCount++;						//����++
	cout<<"The third  iCount="<<iCount<<endl;
	iCount=1;	iCount=-++iCount;						//ǰ��++
	cout<<"The fourth  iCount="<<iCount<<endl;
	return 0;	
}
