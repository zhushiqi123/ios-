#include <iostream>
#include <new> 
using namespace std;
int main()
{  double *pArray[ 10 ];
   try {//���Է����ڴ�
      for ( int i = 0; i < 10; i++ ) 
	  {//Ϊ��������ڴ棬���ʧ���׳�bad_alloc�쳣
		pArray[ i ] = new double[80000000]; 
        cout << "Allocated 80000000 doubles in pArray[ "<< i << " ]\n";
      }
   }
   catch ( bad_alloc &memoryAllocationException ) // bad_alloc�쳣���
   {  cout << "Exception occurred: "<< memoryAllocationException.what() << endl;   } 
   return 0;
}
