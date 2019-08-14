#include <iostream>
using namespace std;
class ZRF
{public:
   ZRF(int i) { num=i; cout<<"ZRF is constructed\n";}
   ~ZRF()  {cout<<"ZRF is destructed\n";}
	void  disp() { cout<<"The value of num is:"<<num<<endl;}
	int num;
};
int main()
{  const ZRF x(10);  // 声明常对象
	x.num=20;		//错误1
	x.disp();			//错误2
	return 0;
}
