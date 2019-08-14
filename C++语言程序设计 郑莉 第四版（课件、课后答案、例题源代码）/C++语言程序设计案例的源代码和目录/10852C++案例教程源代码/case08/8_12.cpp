#include <iostream>  
#include<string> 
using namespace std;
class CDeepCopy
{public: 
	int    n;                       //动态数组的元素个数	
	int   *p;                       //动态数组首地址	
 	CDeepCopy(int) ; 		
	~CDeepCopy();
    CDeepCopy(const CDeepCopy& r) ;  //拷贝构造函数 
	CDeepCopy& operator=(const CDeepCopy& r); //赋值运算符函数	
}; 	
CDeepCopy::~CDeepCopy()	
{  	static int s_num=1;		cout<<s_num++<<" .~CDeepCopy()\n"; 	delete [] p;  }
CDeepCopy::CDeepCopy(int k) { n=k; p=new int[n]; } //构造函数实现
CDeepCopy& CDeepCopy::operator=(const CDeepCopy& r)  //赋值运算符函数实现   
{	if(n!=r.n) 						//两个数组长度不一致时
	{ 	delete [] p;					//释放原来的数组空间
		n=r.n;		                   //设置两个数组长度相等
		p=new int[n];                    //建立与源数组等长的独立数组
	}								//确保目标数组拥有独立的资源
	memcpy(p,r.p,n*sizeof(int));		//拷贝动态资源的物理数据 
	return *this;						//返回物理数据一致的当前对象
}	
CDeepCopy::CDeepCopy(const CDeepCopy& r)  //拷贝构造函数
{  	n=r.n;							//当前数组维数等于源数组维数
	p=new int[n];						//建立独立的内存资源
 	memcpy(p,r.p,n*sizeof(int));		//物理数据全盘拷贝
}
int main()
{	CDeepCopy a(2),d(3);
	a.p[0]=1;  d.p[0]=666; 				//对象a,d数组元素的赋值
	{  	CDeepCopy b(d);  				//调用拷贝构造函数
        a.p[0]=88;		b=a;        		//调用赋值运算符函数
        cout<<b.p[0];   				//显示内层局部对象的数组元素  
	}  
    cout<<d.p[0];                    		//显示d数组元素a.p[0]的值
	cout<<" d fade away;\n";  cout<<a.p[0];  //显示a数组元素a.p[0]的值
	return 0;
}	
