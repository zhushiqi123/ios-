#include <iostream> 
using namespace std; 
int main() 
{	int Array[3][2]={{1,2},{3,4},{5,6}};
	int *pa[3];
	for(int i=0;i<3;i++)		pa[i]=Array[i];	//���1��Ϊָ�����鸳ֵ����ַ��
	for(int j=0;j<3;j++)
	{	for(i=0;i<2;i++,pa[j]++)				//���2��pa[j]++ʹָ��ָ����һ��Ԫ��
			cout<<"Array["<<j<<"]["<<i<<"]="<<*pa[j]<<"\t";
		cout<<endl;
	}
	return 0;
}
