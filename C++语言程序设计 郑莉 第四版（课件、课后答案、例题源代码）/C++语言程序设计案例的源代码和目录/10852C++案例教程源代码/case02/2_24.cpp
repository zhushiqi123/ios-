#include <iostream>
using namespace std;
int main()
{   int num1,num2;    char oper;
	cout<<"Please input an arithmetic expression: ";
    cin>>num1>>oper>>num2;   
    switch(oper) 					//�ÿ������ѡ��ͬ���ʽ�������
	{    case '+':cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;    	break;
        case '-':cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;	 	break;
        case '*':cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;     	break;
        case '/':cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;  		break;
        case '%':cout<<num1<<"%"<<num2<<"="<<num1%num2<<endl;    break;
        default :cout<<"Wrong !"<<endl; 
    }
	return 0;
}
