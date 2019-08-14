#include <iostream>
#include <new> 
using namespace std;
int main()
{  double *pArray[ 10 ];
   try {//尝试分配内存
      for ( int i = 0; i < 10; i++ ) 
	  {//为数组分配内存，如果失败抛出bad_alloc异常
		pArray[ i ] = new double[80000000]; 
        cout << "Allocated 80000000 doubles in pArray[ "<< i << " ]\n";
      }
   }
   catch ( bad_alloc &memoryAllocationException ) // bad_alloc异常句柄
   {  cout << "Exception occurred: "<< memoryAllocationException.what() << endl;   } 
   return 0;
}
