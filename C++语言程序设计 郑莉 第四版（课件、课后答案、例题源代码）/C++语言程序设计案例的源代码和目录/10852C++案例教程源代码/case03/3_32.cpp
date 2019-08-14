#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
void main( void )
{	double question = 45.35, answer;
	answer = sqrt( question );
	if( question < 0 )      cout<<"Error: sqrt returns "<<answer<<endl;
	else      cout<<"The square root of "<<question<<" is "<<answer<<endl;
}
