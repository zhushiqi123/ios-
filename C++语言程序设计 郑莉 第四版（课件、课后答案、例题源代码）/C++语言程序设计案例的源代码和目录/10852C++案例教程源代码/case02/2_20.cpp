#include <iostream> 
#include <cstdlib> 
using namespace std; 
int main() 
{	int MagNum, GueNum;  
	MagNum = rand(); 						//产生随机数
	cout << "Enter the Guess number: ";   cin >> GueNum; 
	if (GueNum == MagNum) 
	{ 									//if语句块起始位置
		cout << "* It is Right *\n"<< MagNum << " is the Magess number.\n"; 
	}										//if语句块结束位置
	else 
	{ 									// else语句块起始位置
		cout << "Sorry, you're wrong."<<endl; 
		if(GueNum > MagNum)
       cout <<"Guessed number is too high.\n"; 
		else
      cout << "Guessed number is too low.\n"; 
	} 									//else语句块结束位置
	return 0; 
}
