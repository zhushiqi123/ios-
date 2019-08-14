#include <iostream> 
using namespace std; 
int main() 
{	int t,i, Array[3][4];									//声明二维数组
	for(t=0; t < 3; ++t) 
	{ for(i=0; i < 4; ++i) 
	  { Array[t][i] = (t*4)+i+1; cout << Array[t][i] << ' '; } 	//二维数复值与输出
	    cout <<endl; 
	} 
	return 0; 
}
