#include<iostream>
using namespace std;
double add(double x,double y) //�����Ķ��壬���з���ֵ
{   double z;    z=x+y;
    cout<<x<<"+"<<y<<"="<<z<<endl;
    return(z);
}
int main()
{   double a=0.5,b=1.0;
	//�Բ�ͬ������ʽ���ú���add()
    cout<<"add(1.5,2.5)="<<add(1.5,2.5)<<endl;
    cout<<"add(a,b)="<<add(a,b)<<endl;
    cout<<"add(2*a,a+b)="<<add(2*a,a+b)<<endl;
  	//�Ա��ʽ��ʽ���ú���add()
   	double c=2*add(a,b);   	cout<<"c="<<c<<endl;
	//����䷽ʽ���ú���add()
	add(2*a,b);
	//�Ժ���������ʽ���ú���add()
   	cout<<" add(a, add(a,b))="<<add(a, add(a,b))<<endl; 
	return 0;
}
