#include<iostream>
using namespace std;
int main()  
{   struct s_type  {  short  i;  float	 x;   } sx={1000,1.1111f};
	union   u_type {  short  i;  float  x;   } ux={10000};
    //����ṹ���ͺͽṹ�������й���Ϣ
    cout<<"sizeof(struct s_type)="<<sizeof(struct s_type)<<endl;
    cout<<"sx.i="<<sx.i<<endl <<"sx.x="<<sx.x<<endl;
    cout<<"sizeof(sx)="<<sizeof(sx)<<endl;
    //����������ͺ����ϱ������й���Ϣ
    cout<<"sizeof(union u_type)="<<sizeof(union u_type)<<endl;
    ux.i=200;    			cout<<"ux.i="<<ux.i<<endl;  //������ϱ���ux ��i��Ա
    ux.x=1.23456f;    	cout<<"ux.x="<<ux.x<<endl;  //������ϱ���ux ��x��Ա
    cout<<"sizeof(ux)="<<sizeof(ux)<<endl;
	return 0;
}
