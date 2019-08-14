#include <iostream> 
using namespace std; 
int main() 
{	int Array[3][2]={{1,2},{3,4},{5,6}};
	int (*ap)[2]=Array,*p; 					//语句1：声明了一个数组指针
	for(int i=0;i<3;i++,ap++)				//语句2：通过指针访问数组元素
	{	for(int j=0,p=(*ap)[j];j<2;j++,p++) cout<<"Array["<<i<<"]["<<j<<"]="<<*p<<"\t";
		cout<<endl;
	}
	return 0;
}
