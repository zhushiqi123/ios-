#include <iostream>
using namespace std;
int max(int,int);						//ԭ������
void disp(int n=max(100,200))             //Ĭ�ϲ���ֵΪ��������
{ cout<<"The max is: "<<n<<endl;}        
int main() 							//���Դ���Ĭ��ֵ�ĺ���disp()
{   disp();    disp(100);    disp(200);	return 0;}
int max(int x,int y)	{return(x>=y?x:y);}
