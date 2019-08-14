#include <iostream> 
using namespace std; 
class Base1
{public:
	Base1(int i)	{cout<<"Base1 constructor called "<<i<<endl;	}
	~Base1(void)	{cout<<"Base1 destructor called"<<endl;	}
};
class Base2
{public:
	Base2(int i)	{cout<<"Base2 constructor called "<<i<<endl;	}
	~Base2(void)	{cout<<"Base2 destructor called"<<endl;	}
};
class ExtBase1:virtual public Base1,public Base2	//���1
{public:
	ExtBase1(int i,int j):Base1(i),Base2(j) 		//���2�����캯������ഫ�ݲ���
	{		cout<<"ExtBase1 constructor called "<<i<<endl;	}
	~ExtBase1(void)
	{		cout<<"ExtBase1 destructor called"<<endl;	}
};
class ExtBase2:public Base2,virtual public Base1//���3����չ����
{public:
	ExtBase2(int i,int j):Base2(j),Base1(i) 		//���4�����캯������ഫ�ݲ���
	{		cout<<"ExtBase2 constructor called "<<i<<endl;	}
	~ExtBase2(void)	{cout<<"ExtBase2 destructor called"<<endl;	}
};
class Derived:public ExtBase2,public ExtBase1	//���5��������
{public:
	Derived(int i, int a,int b,int c)
      :ExtBase1(i,a),ExtBase2(i,b),Base1(c)//���6�����캯����ֱ�ӻ��������ഫ�ݲ���
	{		cout<<"Derived constructor called "<<i<<endl;	}
	~Derived(void)
	{		cout<<"Derived destructor called"<<endl;	}
};
int main()
{	Derived objD(1,2,3,4);							//���7���������������
	return 0;
}
