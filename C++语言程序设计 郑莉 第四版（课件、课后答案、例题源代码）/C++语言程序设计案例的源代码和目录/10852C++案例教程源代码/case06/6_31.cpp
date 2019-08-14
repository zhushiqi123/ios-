#include <iostream> 
using namespace std; 
int main() 
{	int Array[3][2]={{1,2},{3,4},{5,6}};
	int *pa[3];
	for(int i=0;i<3;i++)		pa[i]=Array[i];	//语句1：为指针数组赋值（地址）
	for(int j=0;j<3;j++)
	{	for(i=0;i<2;i++,pa[j]++)				//语句2：pa[j]++使指针指向下一个元素
			cout<<"Array["<<j<<"]["<<i<<"]="<<*pa[j]<<"\t";
		cout<<endl;
	}
	return 0;
}
