#include <iostream>  
using namespace std;
int main()
{	for (int i=0; i < 6; i++)
	{	 for (int j=0; j < 6; j++)
		 {  for (int k=0; k < 6; k++)
			  if (i+j+k > 6) goto Label; 	//ʹ��goto�������Ƕ��ѭ�������Label��
			  else cout << i+j+k << " ";
			cout << "*** ";
		 }
	   Label: cout << "." << endl;  	//����ŵ����
	}
	return 0;
}
