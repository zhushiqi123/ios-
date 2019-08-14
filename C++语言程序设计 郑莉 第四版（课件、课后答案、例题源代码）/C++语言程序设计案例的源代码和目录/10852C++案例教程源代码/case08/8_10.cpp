#include<iostream>
using namespace std;
class CArray                          	//����һ��CArray��
{	double **pp;                       	//��̬���ٵĶ�ά�����׵�ַ
	int m_nRow,m_nColumn;          		//�е�ά�����е�ά��
public : 
	CArray(int r,int c=1);           	//����һ��Ĭ��ֵ�Ĺ��캯��
	~CArray();
	double& operator()(int r,int c=0);   //����һ��Ĭ��ֵ
};
CArray::CArray(int row,int column) 		//���캯����̬�����ڴ�
{  m_nRow=row;	m_nColumn= column; 
	pp=new double*[row]; 				//��������row���е�����ָ��
	for(int j=0;j< row;j++) pp[j]=new double[column]; //ÿһ��ָ��Ԫ�ض�Ҫ���ڴ�
}
inline double& CArray::operator()(int r,int c)	{ return pp[r][c]; }
CArray::~CArray()
{	for(int j=0;j< m_nRow;j++) 	delete [] pp[j]; //������ָ��Ԫ�ص��ڴ�
	delete [] pp;                        //�ٳ�������ָ����ڴ�
}
int main()
{	CArray a(2,3);   CArray b(3);   
	a(0,0)=1;a(0,1)=2;a(0,2)=3;          	//��Բ������ʽʹ������Ԫ��
	a(1,0)=2;a(1,1)=4; 
	a.operator ()(1,2)=6;                //��ʽִ�к���������������� 
	b(0)=2;b(1)=2;b(2)=2;               	//�ȼ���b(0,0)=2;b(1,0)=2;b(2,0)=2;
	cout<<"a(0)*b="<<a(0,0)*b(0)+a(0,1)*b(1)+a(0,2)*b(2)<<endl;
	cout<<"a(1)*b="<<a(1,0)*b(0)+a(1,1)*b(1)+a(1,2)*b(2)<<endl;
	return 0;
}	
