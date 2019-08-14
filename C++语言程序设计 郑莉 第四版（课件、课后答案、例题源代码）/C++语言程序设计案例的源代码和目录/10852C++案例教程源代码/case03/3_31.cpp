#include <iostream>
#include <cmath>
using namespace std;
void main( void )
{	double w = -10.0, x = 3.0, y = 0.0, z;
	z = fmod( w, x );   cout<<"The remainder of "<<w<<" / "<<x<<" is "<<z<<endl;
	z = fmod( x, y);   cout<<"The remainder of "<<x<<" / "<<y<<" is "<<z<<endl;
}
