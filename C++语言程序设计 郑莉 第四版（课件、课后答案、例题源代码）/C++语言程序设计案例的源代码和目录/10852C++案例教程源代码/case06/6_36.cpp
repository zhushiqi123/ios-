#include <iostream >
#include <cstdlib>
using namespace std;

int add (int x,int y) {	cout<<x<<" + "<<y<<" = ";	return x+y;}	//���庯��add 
int sub (int x,int y) 	{	cout<<x<<" - "<<y<<" = ";	return x-y;}	//���庯��sub 
int mult (int x,int y) {	cout<<x<<" * "<<y<<" = ";	return x*y;}	//���庯��mult
int dev (int x,int y) {	cout<<x<<" / "<<y<<" = ";	return x/y;}	//���庯��dev 

void DispResult(int a, int b, int (*fun)(int,int)){	cout<<fun(a,b)<<endl;}
int main()
{	int (*funp[4])(int,int)={add,sub,mult,dev};	  //���1������һ������ָ������
	char op;	int a,b;
	cout<<"Please intput the expression a + b:\n";	cin>>a>>op>>b;
	switch(op)
	{case '+':	DispResult(a,b,funp[0]);	break;//���2��ʹ��funp���ú���add
	case '-':	DispResult(a,b,funp[1]);	break;	 //���3��ʹ��funp���ú���sub
	case '*':	DispResult(a,b,funp[2]);	break;	 //���4��ʹ��funp���ú���mult
	case '/':	DispResult(a,b,funp[3]);	break;	 //���5��ʹ��funp���ú���dev
	default:	cout<<"Operator is illegal;\n";
	}
	return 0;
}
