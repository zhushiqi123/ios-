#include<iostream>
using namespace std;
int main()
{	 enum color { RED=3,YELLOW=6, BLUE=9};//����ö�����Ͳ�ָ����ö��Ԫ�ص�ֵ
    cout<<"RED="<<RED<<endl;    	     //���ö�ٳ��� 
    cout<<"YELLOW="<<YELLOW<<endl;
    cout<<"BLUE="<<BLUE<<endl;
    color c1=YELLOW;    		    //����ö�ٱ�������ʼ��
    color c2;        				
    c2=c1;    c1=BLUE; 				//��ö�ٱ����ĸ�ֵ
    cout<<"c1="<<c1<<endl;            //���ö�ٱ���
    cout<<"c2="<<c2<<endl;
    //c1=100;   					//����!
    //c2=6;      					//����!
    c2=BLUE;                    	//ö�ٱ����ĸ�ֵ����
    cout<<"c1<c2="<<(c1<c2)<<endl;  	//ö�ٱ����Ĺ�ϵ����
	return 0;
}
