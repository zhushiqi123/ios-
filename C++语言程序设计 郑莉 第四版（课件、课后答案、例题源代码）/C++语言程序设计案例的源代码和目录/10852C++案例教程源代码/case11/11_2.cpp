#include <iostream>
#include <sstream>
using namespace std;
int main()
{ 	ostringstream ostr;                 //������������������һ������string����
	double x, y;
	cout << "Input x and y: "; cin >> x >> y;
	ostr << x << " * " << y << " = " << x * y << endl;    //����������
	cout << ostr.str() ;                //�������string����
	return 0;
}
