#include <iostream >
using namespace std;
void swap(int v1,int v2){int tmp=v2;	v2=v1;	v1=tmp;	cout<<"Call swap(int,int)";}
void swap(int *v1,int *v2)
{	int tmp=*v2;	*v2=*v1;	*v1=tmp;	cout<<"Call swap(int*,int*)";}
int main() 
{	int i = 10,j = 20, *pi = &i,*pj = &j;
	cout <<"Initializing..."<<endl;
	swap(&i, &j); cout << *pi << ',' << *pj << endl;//���1�����ú���swap(int *v1,int *v2)
	swap(*pi, *pj); cout << *pi << ',' << *pj << endl; //���2�����ú���swap(int v1,int v2)
	swap(pi, pj); cout << *pi << ',' << *pj << endl;//���3�����ú���swap(int *v1,int *v2)
	return 0;
}
