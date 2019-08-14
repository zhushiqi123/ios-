#include <iostream>
#include <algorithm>
#include <iterator>
#include <set>
using namespace std;
int main()
{	int iarray1[6]={1,3,5,7,9,11};	int iarray2[7]={1,1,2,3,5,8,13};
	multiset<int> iset1(iarray1,iarray1+6);	multiset<int> iset2(iarray2,iarray2+7);
	//������ؼ�����iset1��iset2
	copy(iset1.begin(),iset1.end(),ostream_iterator<int>(cout," "));	cout<<endl;
	copy(iset2.begin(),iset2.end(),ostream_iterator<int>(cout," "));	cout<<endl;
	//�ж�����iset2�Ƿ����������iset1��
	cout<<"iset2 is contained in iset1: "
		<<includes(iset1.begin(), iset1.end(), iset2.begin(),iset2.end())<< endl;
	//����ؼ�iset1��iset2�Ĳ���
	cout<<"Union of iset1 and iset2 is:";
	set_union(iset1.begin(),iset1.end(),iset2.begin(),iset2.end(),
		ostream_iterator<int>(cout," "));	cout<<endl;
	//����ؼ�iset1��iset2�Ĳ
	cout<<"Difference of iset1 and iset2 (iset1-iset2)is:";
	set_difference(iset1.begin(),iset1.end(),iset2.begin(),iset2.end(),
		ostream_iterator<int>(cout," "));	cout<<endl;
	//����ؼ�iset1��iset2�ĶԳƲ
	cout<<"Symmetric Difference of iset1 and iset2 is:";
	set_symmetric_difference(iset1.begin(),iset1.end(),iset2.begin(),iset2.end(),
		ostream_iterator<int>(cout," "));	cout<<endl;
	return 0;
}
