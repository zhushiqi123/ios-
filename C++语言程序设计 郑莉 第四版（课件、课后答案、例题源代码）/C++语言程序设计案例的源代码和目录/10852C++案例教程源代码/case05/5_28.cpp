#include<iostream>
using namespace std;
inline min(int x,int y,int z )			//��������
{	int min=x;
	if(y<min) min=y;
	if(z<min) min=z;
	return min;
}
#define  MIN(a,b)   ((a)<(b)?(a):(b))		//�꺯��
#define  min(a,b,c)  MIN(a,MIN(c,b))	//�꺯��
int main()	
{  	cout<<"The min value is:"<<(min)(4,5,3.0)<<endl;  //������������
	cout<<"The min value is:"<<min(5.0,4,3.0)<<endl;  //���ú꺯��
	return 0;
}
