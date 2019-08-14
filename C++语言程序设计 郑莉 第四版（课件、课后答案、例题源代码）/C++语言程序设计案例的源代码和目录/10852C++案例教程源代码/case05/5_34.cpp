#include<iostream> 
using namespace std;
#define sout(s)  cout<<#s<<endl
#define dout(s,v)  cout<<#s<<v<<endl
int main()
{   sout(this is a string);  	sout(that is a word); 
    sout("zrf" is a string);
    dout(cout<<#s<<endl;,"cout<<#s<<endl");   dout(a=,10000); 
	return 0;
}
