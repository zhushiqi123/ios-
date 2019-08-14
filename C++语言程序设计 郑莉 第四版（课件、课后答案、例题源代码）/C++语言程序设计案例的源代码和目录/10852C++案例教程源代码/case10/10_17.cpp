#include <iostream>   
#include <vector>   
#include <algorithm>  
using namespace std;
void main()
{	int A[] = {1, 2, 3, 4, 5};	const int N = sizeof(A) / sizeof(int);
	vector<int> ivector(A,A+N);
	cout << "List ivector contains: "; 		//输出初始向量容器ivector中的元素
	copy( ivector.begin(), ivector.end(), ostream_iterator< int > ( cout, " " ) ); 
	vector<int>::iterator pos=ivector.begin(); //定义指向初始元素的迭代器
	cout<<"\nThe fist element is: "<<*pos;     //输出第一个元素
	vector<int>::reverse_iterator rpos=ivector.rbegin();	//应用逆向迭代器指向最后元素
	cout<<"\nThe last element is: "<<*rpos<<endl;  		//输出最后一个元素
	back_insert_iterator<vector<int> > iter(ivector);  	//声明后插迭代器
	*iter=6;                                  	//应用后插迭代器插入元素6
	back_inserter(ivector)=8;                 	//应用函数后插元素8
	//输出后插操作后的向量容器ivector中的元素  
	copy( ivector.begin(), ivector.end(), ostream_iterator< int > ( cout, " " ) );  
} 
