#include <iostream>
using namespace std;
class Ratio
{ 	int num, den;
public:
    Ratio(int n=0, int d=1) : num(n), den(d) { }  //��Ĭ�ϲ���ֵ�Ĺ��캯��
    void disp() { cout << num << '/' << den; }
};
int main()
{ 	Ratio x, y(3), z(20,7);		//�����������������ʵ����Ŀѡ����Ӧ�Ĺ��캯��
	cout << "Ratio x = ";	x.disp();
	cout << "\nRatio y = ";	y.disp();
	cout << "\nRatio z = ";	z.disp();
	return 0;
}
