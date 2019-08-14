#include<iostream>
using namespace std;
struct complex{	double real;	double imaginary;};//自定义结构体类型
int main()
{	int m, n;		float x, y;		complex c1, c2, c3;
	int add(int m, int n);
	float add(float x, float y);
	complex add(complex c1, complex c2);
	cout<<"Enter two integer: ";	cin>>m>>n;
	cout<<"integer "<<m<<'+'<<n<<"="<<add(m,n)<<endl;
	cout<<"Enter two real number: ";	 cin>>x>>y;
	cout<<"real number "<<x<<'+'<<y<<"= "<<add(x,y)<<endl;
	cout<<"Enter the first complex number: ";	cin>>c1.real>>c1.imaginary;
	cout<<"Enter the second complex number: "; cin>>c2.real>>c2.imaginary;
	c3=add(c1,c2);
	cout<<"complex number ("<<c1.real<<','<<c1.imaginary<<")+("
		<<c2.real<<','<<c2.imaginary<<")= ("<<c3.real<<','<<c3.imaginary<<")\n";
	return 0;
}
int add(int m, int n)		{  return m+n; 	}
float add(float x, float y)	{  return x+y; 	}
complex add(complex c1, complex c2)
{   complex c;  c.real=c1.real+c2.real;  c.imaginary=c1.imaginary+c2.imaginary;
	return c;
}
