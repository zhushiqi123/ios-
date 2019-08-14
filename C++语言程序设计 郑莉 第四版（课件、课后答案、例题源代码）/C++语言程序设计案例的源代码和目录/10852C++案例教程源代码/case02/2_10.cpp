#include<iostream>
using namespace std;
int main()	
{   int Val1, Val2, Val3, Left, Midd, Righ;
	Left = 10;	Midd = 20;   Righ = 30;
   Val1 = (Left++, --Midd, Righ++);		//使用逗号表达式
	Val2 = (Righ++, Left++, --Midd);		//使用逗号表达式
	Val3 = ( --Midd, Righ++,Left++);		//使用逗号表达式
    cout <<"Val1=\t"<<Val1 <<"\nVal2=\t"<<Val2 <<"\nVal3=\t"<<Val3<<endl;
    return 0;
}