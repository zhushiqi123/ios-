#include<iostream>
using namespace std;
//������ԭ���������Ҳ����������
int main()  
{   float max(float,float);    			//max()����ԭ���������
    float a,b,Max;   					//�����������
    cout<<" Input a=";    cin>>a;    		//�������a
    cout<<" Input b=";    cin>>b;    		//�������b
    Max=max(a,b);     					//����max()���� 
    cout<<"max("<<a<<","<<b<<")="<<Max<<endl;
	return 0;
}
float max(float x,float y) {float z;    z=(x>y)?x:y;    return(z);} //����ֵ����Ϊ������
