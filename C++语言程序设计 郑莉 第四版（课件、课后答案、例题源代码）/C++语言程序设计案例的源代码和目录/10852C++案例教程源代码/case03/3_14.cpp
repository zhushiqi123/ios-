#include <iostream>
using namespace std;
void disp(int x=1,int y=1,int z=1)//带有默认参数值的函数
{   cout<<"Parameter 1 is: "<<x<<endl;
    cout<<"Parameter 2 is: "<<y<<endl;
    cout<<"Parameter 3 is: "<<z<<endl;
}
int main() 					//main()函数中测试参数带有默认值的函数disp()
{	cout<<"No actual parameter"<<endl;    disp();
	cout<<"One actual parameter"<<endl;    disp(1);
	cout<<"Two actual parameter"<<endl;    disp(1,2);
	cout<<"Three actual parameter"<<endl;    disp(1,2,3);
	return 0;
}
