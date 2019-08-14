#include <iostream>
using namespace std;
void MyFunc( void );
class Expt
{  public:
    Expt(){};
    ~Expt(){};
    const char *ShowReason() const    {     return "Expt Class exception"; 	 }
};
class Demo
{ public:
    Demo(){    cout << "Constructing Demo." << endl;}
    ~Demo(){    cout << "Destructing Demo." << endl;}
};
void MyFunc()
{   Demo D;    cout<< "In MyFunc(), throw Expt class exception" << endl;   throw Expt();}
int main()
{   cout << "In main function" << endl;
    try    { cout << "In try, using MyFunc()" << endl;        MyFunc();    }
    catch( Expt E )
    {   cout << "In catch, catch Expt type exception:";
        cout << E.ShowReason() << endl;
    }
    catch( char *str )    {    cout << "Catch other exception" << str << endl;    }
    cout << "return main" << endl;
    return 0;
}
