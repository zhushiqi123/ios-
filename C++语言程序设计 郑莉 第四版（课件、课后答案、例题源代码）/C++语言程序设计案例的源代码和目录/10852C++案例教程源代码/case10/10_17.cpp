#include <iostream>   
#include <vector>   
#include <algorithm>  
using namespace std;
void main()
{	int A[] = {1, 2, 3, 4, 5};	const int N = sizeof(A) / sizeof(int);
	vector<int> ivector(A,A+N);
	cout << "List ivector contains: "; 		//�����ʼ��������ivector�е�Ԫ��
	copy( ivector.begin(), ivector.end(), ostream_iterator< int > ( cout, " " ) ); 
	vector<int>::iterator pos=ivector.begin(); //����ָ���ʼԪ�صĵ�����
	cout<<"\nThe fist element is: "<<*pos;     //�����һ��Ԫ��
	vector<int>::reverse_iterator rpos=ivector.rbegin();	//Ӧ�����������ָ�����Ԫ��
	cout<<"\nThe last element is: "<<*rpos<<endl;  		//������һ��Ԫ��
	back_insert_iterator<vector<int> > iter(ivector);  	//������������
	*iter=6;                                  	//Ӧ�ú�����������Ԫ��6
	back_inserter(ivector)=8;                 	//Ӧ�ú������Ԫ��8
	//��������������������ivector�е�Ԫ��  
	copy( ivector.begin(), ivector.end(), ostream_iterator< int > ( cout, " " ) );  
} 
