#include <iostream>
using namespace std;
int main()
{  //ʹ��Ĭ�ϸ�ʽ��ʾ˫������ֵ
   cout << "Before using showpoint\n" << "8.8800 prints as: " << 8.8800 << endl
        << "8.8000 prints as: " << 8.8000 << "\n8.0000 prints as: " << 8.0000 << endl;
   //ʹ��showpoint����ʾ˫������ֵ
   cout << showpoint<< "After using showpoint\n" << "8.8800 prints as: " << 8.8800 << endl
        << "8.8000 prints as: " << 8.8000 << "\n8.0000 prints as: " << 8.0000 << endl;
   return 0;
}
