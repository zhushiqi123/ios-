#include <iostream> 
using namespace std; 
int main() 
{ short int i; 				// signed short �������� 
  short unsigned int j; 		// unsigned short�������� 
  j = 50000;    i = j; 		//��unsigned short����������ֵ��signed short���ͱ���
  cout <<" The short int is:"<< i <<endl; 			//������ֵ���
  cout <<" The short unsigned int is:"<< j<<endl;    
  return 0; 
}
