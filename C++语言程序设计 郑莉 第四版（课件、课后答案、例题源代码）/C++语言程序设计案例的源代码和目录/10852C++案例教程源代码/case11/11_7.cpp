#include < iostream >
#include < cmath >
using namespace std;
int main( )
{	float a, b, c, disc; 
	cout << "Please input three float numbers: a, b, c: ";	cin >>a >>b >>c;
	if (a ==0) cerr <<"Error: a is equal to zero!"<<endl ;//��������Ϣ���뵽cerr��
	else 
	  if((disc=b*b-4*a*c) <0)
		cerr << "Error: disc = b * b -4 * a * c <0" << endl; //��������Ϣ���뵽cerr��
	  else
	  {	cout <<"x1 ="<< ( -b + sqrt(disc) )/(2 * a) <<endl;
			cout <<"x2 ="<< ( - b - sqrt (disc) ) / (2 * a) << endl ;
	  }
	return 0 ;
}
