#include <iostream>
#include <algorithm>
#include <iterator>
#include <set>
using namespace std;
int main()
{	int iarray1[6]={1,3,5,7,9,11};	int iarray2[7]={1,1,2,3,5,8,13};
	multiset<int> iset1(iarray1,iarray1+6);	multiset<int> iset2(iarray2,iarray2+7);
	//输出多重集序列iset1和iset2
	copy(iset1.begin(),iset1.end(),ostream_iterator<int>(cout," "));	cout<<endl;
	copy(iset2.begin(),iset2.end(),ostream_iterator<int>(cout," "));	cout<<endl;
	//判断序列iset2是否包含在序列iset1中
	cout<<"iset2 is contained in iset1: "
		<<includes(iset1.begin(), iset1.end(), iset2.begin(),iset2.end())<< endl;
	//求多重集iset1和iset2的并集
	cout<<"Union of iset1 and iset2 is:";
	set_union(iset1.begin(),iset1.end(),iset2.begin(),iset2.end(),
		ostream_iterator<int>(cout," "));	cout<<endl;
	//求多重集iset1与iset2的差集
	cout<<"Difference of iset1 and iset2 (iset1-iset2)is:";
	set_difference(iset1.begin(),iset1.end(),iset2.begin(),iset2.end(),
		ostream_iterator<int>(cout," "));	cout<<endl;
	//求多重集iset1与iset2的对称差集
	cout<<"Symmetric Difference of iset1 and iset2 is:";
	set_symmetric_difference(iset1.begin(),iset1.end(),iset2.begin(),iset2.end(),
		ostream_iterator<int>(cout," "));	cout<<endl;
	return 0;
}
