#include <iostream>
using namespace std;
int main()
{  //使用默认格式显示双精度数值
   cout << "Before using showpoint\n" << "8.8800 prints as: " << 8.8800 << endl
        << "8.8000 prints as: " << 8.8000 << "\n8.0000 prints as: " << 8.0000 << endl;
   //使用showpoint后显示双精度数值
   cout << showpoint<< "After using showpoint\n" << "8.8800 prints as: " << 8.8800 << endl
        << "8.8000 prints as: " << 8.8000 << "\n8.0000 prints as: " << 8.0000 << endl;
   return 0;
}
