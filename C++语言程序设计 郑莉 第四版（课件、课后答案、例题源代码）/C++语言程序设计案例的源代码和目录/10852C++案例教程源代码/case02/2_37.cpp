#include <iostream>  
using namespace std;
int main()
{	for (int i=0; i < 6; i++)
	{	 for (int j=0; j < 6; j++)
		 {  for (int k=0; k < 6; k++)
			  if (i+j+k > 6) goto Label; 	//使用goto语句跳出嵌套循环到标号Label处
			  else cout << i+j+k << " ";
			cout << "*** ";
		 }
	   Label: cout << "." << endl;  	//带标号的语句
	}
	return 0;
}
