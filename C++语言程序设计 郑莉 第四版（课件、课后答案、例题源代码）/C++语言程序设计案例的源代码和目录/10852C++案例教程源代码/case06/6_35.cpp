#include <iostream >
#include <cstdlib>
using namespace std;
int add (int x,int y) {	cout<<x<<" + "<<y<<" = ";	return x+y;}	//���庯��add 
int sub (int x,int y) 	{	cout<<x<<" - "<<y<<" = ";	return x-y;}	//���庯��sub 
int mult (int x,int y) {	cout<<x<<" * "<<y<<" = ";	return x*y;}	//���庯��mult
int dev (int x,int y) {	cout<<x<<" / "<<y<<" = ";	return x/y;}	//���庯��dev 
int main()
{	int (*funp)(int,int);						//����һ������ָ��
	char op;	int a,b;
	cout<<"Please intput the expression a + b:\n";	cin>>a>>op>>b;
	switch(op)
	{case '+':	funp=add;		break;	//������add����ڵ�ַ����ָ��funp
	case '-':	funp=sub;		break; 	//������sub����ڵ�ַ����ָ��funp
	case '*':	funp=mult;		break; 	//������mult����ڵ�ַ����ָ��funp
	case '/':	funp=dev;		break;	//������dev����ڵ�ַ����ָ��funp
	default:	cout<<"Operator is illegal;\n";
	}
	cout<<funp(a,b)<<endl;
	return 0;
}
