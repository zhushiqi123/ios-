#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
void main( void )
{	int     ix = -4, iy;
	long    lx = -41567L, ly;
	double  dx = -3.141593, dy;
	iy = abs( ix );   cout<<"The absolute value of"<<ix <<" is "<<iy<<endl;
	ly = labs( lx );   cout<<"The absolute value of"<<lx <<" is "<<ly<<endl;
	dy = fabs( dx );   cout<<"The absolute value of"<<dx <<" is "<<dy<<endl;
}
