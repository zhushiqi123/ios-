#include <iostream>
using namespace std;
int main()
{  bool boolValue = true; 
   cout << "boolValue is " << boolValue << endl; //���1����ʾĬ�ϲ���ֵ��
   cout << "boolValue (after using boolalpha) is "
        << boolalpha << boolValue << endl ; 	//���2��ʹ�� boolalpha����ʾ����ֵ
   cout << "switch boolValue and use noboolalpha" << endl;
   boolValue = false; 							//�ı�boolValue
   cout << noboolalpha << endl;					//���3��ʹ��noboolalpha
   cout << "boolValue is " << boolValue << endl;   //ʹ��noboolalpha����ʾboolValue
   //����ʹ��boolalpha
   cout << "boolValue (after using boolalpha) is "<< boolalpha << boolValue << endl;
   return 0;
}
