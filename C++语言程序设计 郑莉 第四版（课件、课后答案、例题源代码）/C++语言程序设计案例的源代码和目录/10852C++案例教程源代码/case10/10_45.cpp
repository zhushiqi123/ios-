#include <iostream>
#include <list>
#include <algorithm>  
using namespace std ;
void main(void)
{	int A[5]={0,2,-3,4,6};	list<int> L(A,A+5);       //�����б�����   
	//Ѱ�ҵ�һ��������
	list<int>::iterator first_positive = find_if(L.begin(), L.end(), bind2nd(greater<int>(), 0)); 
	cout <<"The first_positive number is : "<< *first_positive<<endl; 
	list<int>::iterator first_negative = 					//Ѱ�ҵ�һ��������
       find_if(L.begin(), L.end(), not1(bind2nd(greater_equal<int>(), 0)));
	cout <<"The first_negative number is : "<< *first_negative<<endl;	
}
