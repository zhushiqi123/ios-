#include <iostream>
using namespace std;
class Ratio
{ 	int num, den;
public:
    Ratio() : num(0), den(1) { }				//ʹ�ó�ʼ���б��Ĭ�Ϲ��캯��
    Ratio(int n) : num(n), den(1) { }			//ʹ�ó�ʼ���б��һ�������Ĺ��캯��
    Ratio(int n, int d) : num(n), den(d) { }	//ʹ�ó�ʼ���б�Ĵ������������캯��
    void disp() { cout << num << '/' << den; }	//������
};
int main()
{ 	Ratio x, y(3), z(20,7);		//�����������������ʵ����Ŀѡ����Ӧ�Ĺ��캯��
	cout << "Ratio x = ";	x.disp();
	cout << "\nRatio y = ";	y.disp();
	cout << "\nRatio z = ";	z.disp();
	return 0;
}
