#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
using namespace std;
const DefaultArraySize=10;				//����ȱʡΪ����
template<typename elemType> 
class Array
{public:
	explicit Array(int sz=DefaultArraySize)	{	size=sz;		ia=new elemType[size];	}
	~ Array()	{  delete [] ia;}
	elemType & operator [] (int ix) const	//���±������[]����
	{	if(ix<0||ix>=size)				//�����쳣�׳�����ֹ����ֵԽ��
		{	string eObj="Out_of_range error in Array <elemType>::operator[]()";
			throw out_of_range(eObj);
		}
		return ia[ix];					//����ԭ��[]������������ʽ
	}
private:
	int size;
	elemType *ia;
};
int main()
{	int i;		Array<int> arr;
	try								//д��arr [10]ʱ����
{	for(i=0;i<=DefaultArraySize;i++) {arr[i]=i+1;	cout<<setw(5)<<arr[i];	} 
		cout<<endl;
	}
	catch(const out_of_range & excp) 	//����쳣��Ϣ
{	cerr<<'\n'<<excp.what()<<'\n'; 		return -1;	}
	return 0;
}
