#include <iostream> 
using namespace std; 
int main() 
{	int *i, j[10];   double *f, g[10]; 
	i = j;  f = g;  
	for(int x=0; x<5; x++)  
		cout << i+x << ' ' << f+x << '\n';  //�����ÿ��ָ�����x��ָ��ĵ�ַ   
	return 0; 
}
