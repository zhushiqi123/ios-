#include <iostream> 
using namespace std; 
class ArrayElem
{ 	int x; 
public: 
  	void setx(int i) { x = i; } 
  	int getx() { return x; } 
}; 
int main() 
{ 	ArrayElem obs[4]; 					//语句1：创建对象数组
  	for(int i=0; i < 4; i++)     
        obs[i].setx(i);                   //语句2：访问数组元素的成员
  	for(i=0; i < 4; i++)						
    	   cout<<"obs["<<i<<"].getx(): "<<obs[i].getx()<<"\n";  //语句3：访问数组元素的成员
  	return 0; 
}
