#include <iostream>
using namespace std;
void disp(int x=1,int y=1,int z=1)//����Ĭ�ϲ���ֵ�ĺ���
{   cout<<"Parameter 1 is: "<<x<<endl;
    cout<<"Parameter 2 is: "<<y<<endl;
    cout<<"Parameter 3 is: "<<z<<endl;
}
int main() 					//main()�����в��Բ�������Ĭ��ֵ�ĺ���disp()
{	cout<<"No actual parameter"<<endl;    disp();
	cout<<"One actual parameter"<<endl;    disp(1);
	cout<<"Two actual parameter"<<endl;    disp(1,2);
	cout<<"Three actual parameter"<<endl;    disp(1,2,3);
	return 0;
}
