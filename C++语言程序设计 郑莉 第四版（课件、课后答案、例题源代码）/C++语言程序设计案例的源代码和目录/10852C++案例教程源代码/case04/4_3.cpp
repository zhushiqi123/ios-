#include <iostream>
using namespace std;
class PriClass 
{   int iv;    double dv;				//˽�����ݳ�Ա
public:
    void set_PriClass(int n,double x);		//���к�����ԱΪ�ӿں���
    void show_PriClass(char*);			//���к�����ԱΪ�ӿں���
};
//����PriClass��Ľӿڳ�Ա����
void PriClass::set_PriClass(int n,double x) { iv=n;  dv=x;}
void PriClass::show_PriClass(char *name)
{   cout<<name<<": "<<"iv=" <<iv<< ", dv=" <<dv<< endl;}
int main()
{   PriClass obj;    		 obj.show_PriClass("obj");//ͨ���ӿں������������ݳ�Ա
    obj.set_PriClass(5,5.5);  obj.show_PriClass("obj");//ͨ���ӿں������������ݳ�Ա
	return 0;
}
