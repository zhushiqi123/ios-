#include<iostream>
using namespace std;
class CArray                          	//声明一个CArray类
{	double **pp;                       	//动态开辟的二维数组首地址
	int m_nRow,m_nColumn;          		//行的维数，列的维数
public : 
	CArray(int r,int c=1);           	//设置一个默认值的构造函数
	~CArray();
	double& operator()(int r,int c=0);   //设置一个默认值
};
CArray::CArray(int row,int column) 		//构造函数动态申请内存
{  m_nRow=row;	m_nColumn= column; 
	pp=new double*[row]; 				//首先申请row个行的数组指针
	for(int j=0;j< row;j++) pp[j]=new double[column]; //每一个指针元素都要求内存
}
inline double& CArray::operator()(int r,int c)	{ return pp[r][c]; }
CArray::~CArray()
{	for(int j=0;j< m_nRow;j++) 	delete [] pp[j]; //先清理指针元素的内存
	delete [] pp;                        //再撤销二级指针的内存
}
int main()
{	CArray a(2,3);   CArray b(3);   
	a(0,0)=1;a(0,1)=2;a(0,2)=3;          	//以圆括号形式使用数组元素
	a(1,0)=2;a(1,1)=4; 
	a.operator ()(1,2)=6;                //显式执行函数调用运算符函数 
	b(0)=2;b(1)=2;b(2)=2;               	//等价于b(0,0)=2;b(1,0)=2;b(2,0)=2;
	cout<<"a(0)*b="<<a(0,0)*b(0)+a(0,1)*b(1)+a(0,2)*b(2)<<endl;
	cout<<"a(1)*b="<<a(1,0)*b(0)+a(1,1)*b(1)+a(1,2)*b(2)<<endl;
	return 0;
}	
