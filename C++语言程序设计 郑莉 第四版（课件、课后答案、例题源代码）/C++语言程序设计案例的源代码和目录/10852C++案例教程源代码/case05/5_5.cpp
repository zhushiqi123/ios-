#include <iostream>
using namespace std;
class ZRF
{public:
	 int den;								//���г�Ա���оֲ�������
    ZRF(int n=0, int d=1) : num(n), den(d) { } //��Ĭ�ϲ���ֵ�Ĺ��캯��
    void disp() { cout << num << '/' << den; } //���к������оֲ�������
 private:
    int num;
};
int main()
{	ZRF z(20);
	cout << "z = ";  z.disp();   				//�����������Ĺ��к���
	cout << "\nz = ";  z.den=50;   z.disp(); 	//�����������Ĺ��г�Ա
	cout << "\nz = "; z.disp();
	//z.num=10;  							//���������ⲻ�ܷ������˽�г�Ա
	return 0;
}
