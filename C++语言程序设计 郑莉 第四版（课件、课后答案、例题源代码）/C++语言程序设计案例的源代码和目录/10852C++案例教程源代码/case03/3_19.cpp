#include <iostream>
using namespace std;
int main()
{	int min (int a, int b, int c);                 //��������
	int min (int a, int b);                  		//��������
	int i1 ,i2,i3,i;
	cout<<"Enter three integers:";	cin >>i1 >>i2 >>i3;     //����3������
	i = min(i1 ,i2) ;  cout <<"The min in two intergers=" <<i <<endl; // 2����������С��
	i = min(i1 ,i2 ,i3) ;                         // 3����������С��
    cout <<"The min in three intergers=" <<i <<endl;
	return 0;
}
int min(int a,int b,int c)            //������3�������е���С�ߵĺ���
{	int k;		k=(a<b)?a:b;		k=(k<c)?k:c;	return k;}
int min(int a,int b)                  //������2�������е���С�ߵĺ���
{	int k;		k=(a<b)?a:b;		return k;}
