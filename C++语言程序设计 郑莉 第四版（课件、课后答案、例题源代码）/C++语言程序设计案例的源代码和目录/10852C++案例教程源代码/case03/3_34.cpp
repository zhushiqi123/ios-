#include <iostream>
#include <cmath>
using namespace std;

struct complex
{
   double real;
   double imag;
};

int fun(unsigned n, int &zero)  	//���ͳ�ƹ��ܵĺ������������βΣ�����ͳ�ƽ��
{ 
	int count=0,max=0,t;
    do{
           t=n%10;       	//�ɵ�λ��ʼ���ȡ����λ����
     if(t==0)        	//�����λΪ0�������
           count++;
           if(max<t) max=t;	//maxʼ�ձ��ֵ�ǰ�ҵ������ֵ
           n=n/10;
	}while(n);
    zero=count;
    return max;				//�������ֵ
}

int fun(int n, int &zero)  	//���غ���
{ 
    return fun(unsigned(abs(n)),zero);				
}
int fun(double d, int &zero)  	//���غ���
{ 
    int n1, n2;
    n1=d;					//ȡ����������������
    n2=(d-n1)*10;				//ȡС���������λ
    if (n2>=5) n1++;			//��������
    return fun( n1, zero );		//�������غ���un( n1, zero )���ͳ�ƣ��������ֵ
}

int fun(complex c, int &zero)  	//���غ���
{ 
    double d;	
    d = c.real;				//ȡ����������������
    return fun( d, zero );		//�������غ���un( n1, zero )���ͳ�ƣ��������ֵ
}
int main()
{ 
	unsigned uNum; 
    int intNum;
    int zero,max;
    double dNum;
    complex c;
    cout<<"\nEnter an unsigned number: ";
    cin>>uNum;
    max = fun( uNum, zero );
    cout<<"\nThe result of unsigned: max="<<max<<"  zero="<<zero<<endl;
    cout<<"\nEnter a signed number: ";
    cin>>intNum;
    max = fun( intNum, zero );
 cout<<"\nThe result of int: max="<<max<<"  zero="<<zero<<endl;
    cout<<"\nEnter a double: ";
    cin>>dNum;
    max = fun(dNum, zero );
    cout<<"\nThe result of double: max="<<max<<"  zero="<<zero<<endl;
    cout<<"\nEnter a complex: ";
    cin>>c.real>>c.imag;
    max = fun(c, zero );
    cout<<"\nThe result of complex: max="<<max<<"  zero="<<zero<<endl;
    return 0;
}
