#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14159
void main(void)
{	double x, y;   x = PI / 2;
	y = sin( x );   	cout<< "sin("<< x<<" ) = "<< y<<endl;
	y = sinh( x );  	cout<< "sinh("<< x<<" ) = "<< y<<endl;
	y = cos( x );   	cout<< "cos("<< x<<" ) = "<< y<<endl;
	y = cosh( x );  	cout<< "cosh("<< x<<" ) = "<< y<<endl;
	y = asin( x );  	cout<< "Arcsine of "<<x<<" = "<< y<<endl;
	y = acos( x );  	cout<< "Arccosine of "<<x<<" = "<< y<<endl;
	y = tan( x );   	cout<< "tan("<< x<<" ) = "<< y<<endl;
	y = tanh( x );  	cout<< "tanh("<< x<<" ) = "<< y<<endl;
	y = atan( x );  	cout<< "Arctangent of "<<x<<" = "<< y<<endl;
	double z;   z = atan2( x, y );   cout<<"Arctangent of "<<x<<" / "<<y<<": "<<z<<endl; 
}
