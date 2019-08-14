#include <iostream>
using namespace std;
class NumClass 
{	int num; 
public: 
	void set_num(int val) { num = val; } 
	void show_num(){ cout << "The num is:"<<num << "\n"; } 
};

int main() 
{	NumClass ob[2], *p; 		//声明对象数组和对象指针
	ob[0].set_num(10);  ob[1].set_num(20); 	//通过对象数组名和下标来访问元素 
	p = &ob[0];  				//将对象数组的首元素的地址赋给指针 
	p->show_num();				//使用指针显示数组元素 ob[0] 
	p++;  	  p->show_num(); 	//使用指针显示数组元素 ob[1]  
	p--;  	  p->show_num(); 	//再次显示ob[0] 
	return 0; 
}
