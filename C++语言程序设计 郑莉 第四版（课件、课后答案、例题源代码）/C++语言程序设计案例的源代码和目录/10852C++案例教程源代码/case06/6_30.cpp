#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() 
{   int Array[10],*va=Array;
	for(int i=0;i<10;i++)	*(va+i)=i+1;				//ͨ��ָ��Ϊ���鸳ֵ
	for(i=0;i<10;i++)		cout<<setw(4)<<Array[i];	//ͨ�������±��������Ԫ��
	cout<<endl;
	for(i=0;i<10;i++)		*va++=i+1;				//ͨ��ָ��Ϊ���鸳ֵ
	va=Array;      								//����ָ��ʹ��ָ�������׵�ַ
	for(i=0;i<10;i++)		cout<<setw(4)<<*va++;		//ͨ��ָ���������Ԫ��
	cout<<endl;
	return 0;
}
