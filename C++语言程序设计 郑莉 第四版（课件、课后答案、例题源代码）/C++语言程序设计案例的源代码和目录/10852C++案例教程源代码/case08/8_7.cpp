#include <iostream>
#include <string>
using namespace std;
class Words
{   char *str;
  public:
	Words (char *s)   {str=new char[strlen (s) +1] ;  strcpy(str, s) ; }
     void disp()  	    {cout << str << endl;}
	char &operator[] (int i)  { return *(str+i);} 			//���1������str[i]  
};
int main()
{	char  *s="china";
	Words word(s) ;       word.disp () ;
	int n=strlen(s) ;
	while (n>=0)   { word [n-1] =word [n-1 ] -32 ; n--; }//���2����ĸת��Ϊ��д
     word.disp () ;
	return 0;
}
