#include <iostream> 
using namespace std; 
int main() 
{	int Array[3][2]={{1,2},{3,4},{5,6}};
	int (*ap)[2]=Array,*p; 					//���1��������һ������ָ��
	for(int i=0;i<3;i++,ap++)				//���2��ͨ��ָ���������Ԫ��
	{	for(int j=0,p=(*ap)[j];j<2;j++,p++) cout<<"Array["<<i<<"]["<<j<<"]="<<*p<<"\t";
		cout<<endl;
	}
	return 0;
}
