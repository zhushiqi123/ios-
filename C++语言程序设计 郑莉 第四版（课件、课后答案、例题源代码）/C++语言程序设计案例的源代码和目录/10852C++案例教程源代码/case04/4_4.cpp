#include<iostream>
using namespace std;
struct StructClass 						//��struct�ؼ��ֶ���StructClass��
{	void set_value(int n)    {value=n; }						//��������
	void show_value(char *name)  	{ cout<<name<<": "<<value<<endl; } 	//��������
private:									//Ϊ�˱���˽�����ԣ�����ʡ��private
	int value;
};
int main()	
{   StructClass a;     	a.show_value ("a");//ͨ��������ʹ������Ժ���
    a.set_value(100);  a.show_value ("a");//ͨ��������ʹ������Ժ���
	return 0;
}
