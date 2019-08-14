#include <iostream>
using namespace std;
int fun(int) throw(int);							//异常处理函数
static int Array[]={1,2,3,4,5};
int main()
{	try	{cout<<"Array[1]="<<fun(1)<<endl;
		cout<<"Array[10]="<<fun(6)<<endl;		//数组下标越界
		cout<<"Array[3]="<<fun(4)<<endl;
	}
	catch(int)		
     { cout<<"Subscription is out of range"<<endl;	}//捕捉异常
	return 0;	
}
int fun(int i)
{	if(i>=5) throw i;	return Array[i];}
