#include <iostream>
using namespace std;
int main()
{	int max( int a,int b, int c) ;                  //����ԭ������
	double max( double a,double b,double c) ;     	 //����ԭ������
	long max ( long a, long b, long c) ;            //����ԭ������
	int i1 ,i2 ,i3 ,i;	 cin >>i1 >>i2 >>i3;         //����3������
	i = max(i1 ,i2,i3) ;   cout <<"i_max =" <<i <<endl;    //��3�������е������
	double d1, d2, d3, d;	cin >>d1 >>d2 >>d3;     //����3��˫������
	d = max ( d1, d2, d3 ) ;  cout << "d_max =" <<d <<endl ; //��3��˫�������е������
	long g1 ,g2 ,g3 ,g;	cin >>g1 >>g2 >>g3;     //����3��������
	g = max( g1, g2, g3 ) ;  cout <<"g_max =" << g << endl ; //��3���������е������
	return 0;
}
int max(int a,int b,int c)                  		 //������3�������е�����ߵĺ���
{	if(b > a) a=b;	if(c > a) a=c;	return a;}
double max(double a,double b,double c)              //������3��˫������������ߵĺ���
{	if(b >a) a=b;	if(c >a) a=c;	return a;}
long max( long a, long b,long c)                    //������3��������������ߵĺ���
{	if(b >a) a=b;	if(c >a) a=c;	return a;}
