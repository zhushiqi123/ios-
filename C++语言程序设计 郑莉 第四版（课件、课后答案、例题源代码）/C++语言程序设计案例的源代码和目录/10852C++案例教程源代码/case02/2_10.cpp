#include<iostream>
using namespace std;
int main()	
{   int Val1, Val2, Val3, Left, Midd, Righ;
	Left = 10;	Midd = 20;   Righ = 30;
   Val1 = (Left++, --Midd, Righ++);		//ʹ�ö��ű��ʽ
	Val2 = (Righ++, Left++, --Midd);		//ʹ�ö��ű��ʽ
	Val3 = ( --Midd, Righ++,Left++);		//ʹ�ö��ű��ʽ
    cout <<"Val1=\t"<<Val1 <<"\nVal2=\t"<<Val2 <<"\nVal3=\t"<<Val3<<endl;
    return 0;
}