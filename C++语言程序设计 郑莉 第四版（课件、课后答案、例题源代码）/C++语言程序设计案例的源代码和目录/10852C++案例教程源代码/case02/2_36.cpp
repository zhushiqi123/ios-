#include <iostream> 
#include <cstdlib>
using namespace std; 
int main() 
{	int sum=0,num=0,m; 
	cout<<"Please input integers (0:end):"<<endl; 
	do { cin>>m;	  num++;	  sum+=m;
		   if(m==0)
		   { cout<<"Entered numbers:"<<num<<" integers.\n";
			cout<<"The sum is:"<<sum<<endl;
			exit(0);								// ʹ��exit()������ֹ����
		   }
	}while(1);
	return 0; 
}
