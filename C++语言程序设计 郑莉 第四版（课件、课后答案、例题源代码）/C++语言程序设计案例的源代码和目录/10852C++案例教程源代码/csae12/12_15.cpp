#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
using namespace std;
const DefaultArraySize=10;				//类型缺省为整型
template<typename elemType> 
class Array
{public:
	explicit Array(int sz=DefaultArraySize)	{	size=sz;		ia=new elemType[size];	}
	~ Array()	{  delete [] ia;}
	elemType & operator [] (int ix) const	//对下标运算符[]重载
	{	if(ix<0||ix>=size)				//增加异常抛出，防止索引值越界
		{	string eObj="Out_of_range error in Array <elemType>::operator[]()";
			throw out_of_range(eObj);
		}
		return ia[ix];					//保留原来[]的所有索引方式
	}
private:
	int size;
	elemType *ia;
};
int main()
{	int i;		Array<int> arr;
	try								//写入arr [10]时出界
{	for(i=0;i<=DefaultArraySize;i++) {arr[i]=i+1;	cout<<setw(5)<<arr[i];	} 
		cout<<endl;
	}
	catch(const out_of_range & excp) 	//输出异常信息
{	cerr<<'\n'<<excp.what()<<'\n'; 		return -1;	}
	return 0;
}
