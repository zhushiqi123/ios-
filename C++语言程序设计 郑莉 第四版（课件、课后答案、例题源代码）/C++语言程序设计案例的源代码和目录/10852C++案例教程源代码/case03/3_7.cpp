#include<iostream>
using namespace std;
inline int max(int x,int y)  { return x>y?x:y;} //ʹ��inline�ؼ�������max()Ϊ��������
int main() 
{   int a=3,b=5,c;
    c=max(a,b);    cout<<"max("<<a<<","<<b<<")="<<c<<endl;
    cout<<"max("<<15<<","<<11<<")="<<max(15,11)<<endl;
	return 0;
}
