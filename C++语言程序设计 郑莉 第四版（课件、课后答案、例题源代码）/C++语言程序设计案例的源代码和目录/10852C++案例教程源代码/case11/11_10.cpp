#include <iostream>   
#include <iomanip>   
using namespace std;
void main()   
{   double values[] = {1.23,35.36,653.7,4358.24};
    char *names[] = {"zrf", "ssh", "zzz", "sss"};
    for(int i=0;i<4;i++)		//ÉèÖÃÓò¿íÊä³ö
    {   cout.width(20);    cout<< names[i] << setw(20) << values[i] <<'\n'; }
}
