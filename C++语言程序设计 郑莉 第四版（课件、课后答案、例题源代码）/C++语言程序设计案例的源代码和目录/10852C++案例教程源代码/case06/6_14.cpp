#include <iostream> 
using namespace std; 
class ArrayElem
{ 	int x; 
public: 
  	void setx(int i) { x = i; } 
  	int getx() { return x; } 
}; 
int main() 
{ 	ArrayElem obs[4]; 					//���1��������������
  	for(int i=0; i < 4; i++)     
        obs[i].setx(i);                   //���2����������Ԫ�صĳ�Ա
  	for(i=0; i < 4; i++)						
    	   cout<<"obs["<<i<<"].getx(): "<<obs[i].getx()<<"\n";  //���3����������Ԫ�صĳ�Ա
  	return 0; 
}
