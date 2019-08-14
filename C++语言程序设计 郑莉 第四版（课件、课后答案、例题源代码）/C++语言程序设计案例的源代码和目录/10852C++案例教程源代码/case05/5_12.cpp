#include <iostream> 
using namespace std; 
class FriFunClass 
{	int a, b; 
public: 
	FriFunClass(int i, int j) { a=i; b=j; } 
	friend int FriFun(FriFunClass x); 	//友元成员函数 
}; 
int FriFun(FriFunClass x) 			//注意：FriFun() 不是任何类的成员函数
{	//由于函数FriFun() 是类FriFunClass的友元函数，所以它不能直接访问a和b 
	int max = x.a < x.b ? x.a : x.b; 
	for(int i=2; i <= max; i++) 
		if((x.a%i)==0 && (x.b%i)==0) return i; 
	return 0; 
} 
int main() 
{	FriFunClass n(10, 20); 			//声明类对象
	if(FriFun(n))  cout << "Common denominator is " <<FriFun(n) << "\n"; 
	else  cout << "No common denominator.\n"; 
	return 0; 
}
