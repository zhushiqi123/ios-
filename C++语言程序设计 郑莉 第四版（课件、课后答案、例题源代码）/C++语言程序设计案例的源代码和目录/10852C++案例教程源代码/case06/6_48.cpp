#include<iostream>
using namespace std;
int main()
{	int n,i,j;
	float (*p)[6],*q;				//���1����������ָ��
	cout<<"Please input the number of the student:";	cin>>n;
	p=new float[n][6];				//���2��Ϊ���鶯̬�����ڴ�ռ�
	for(i=0;i<n;i++)
	{	cout<<"Input student No."<<i+1<<"scores:\n";
		q=p[i]; q[4]=0;
		for(j=0;j<4;j++)
		{  cout<<"Score No. "<<j+1<<":"; cin>>q[j]; q[4]+=q[j];	}
		q[5]=q[4]/4;
	}
	cout<<"No. \tSc1\tSc2\tSc3\tSc4\tTotal\tAverage\n\n";
	for(i=0;i<n;i++)
	{	cout<<i+1; q=p[i];
		for(j=0;j<6;j++)	cout<<'\t'<<q[j];
		cout<<endl;
	}
	delete [] p;					//���3���ͷŶ�̬����
	return 0;
} 
