#include <iostream>
#include <cstdlib>
using namespace std;
unsigned long factor(int n)				//�׳˺���
{	if(n==0) return 1;	return (n*factor(n-1));}	
int main(int argc, char *argv[])			//�������в�����main����
{	if(argc !=2)	{	cout<<"Usage: zrf n<cr>";	return 1;	}
	cout<<factor(atoi(argv[1]))<<endl;	//�������������ַ���ת��Ϊint����
	return 0;
}
