#include <iostream> 
#include <cstdlib> 
using namespace std; 
int main() 
{	int MagNum, GueNum;  
	MagNum = rand(); 						//���������
	cout << "Enter the Guess number: ";   cin >> GueNum; 
	if (GueNum == MagNum) 
	{ 									//if������ʼλ��
		cout << "* It is Right *\n"<< MagNum << " is the Magess number.\n"; 
	}										//if�������λ��
	else 
	{ 									// else������ʼλ��
		cout << "Sorry, you're wrong."<<endl; 
		if(GueNum > MagNum)
       cout <<"Guessed number is too high.\n"; 
		else
      cout << "Guessed number is too low.\n"; 
	} 									//else�������λ��
	return 0; 
}
